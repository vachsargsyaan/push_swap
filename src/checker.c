/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vacsargs <vacsargs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 15:15:11 by vacsargs          #+#    #+#             */
/*   Updated: 2023/06/17 15:28:36 by vacsargs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/checker.h"

void	ft_error(void)
{
	write (1, "Error\n", 6);
	exit(1);
}

int	main(int argc, char **argv)
{
	t_var	z;
	t_stack	*a;
	t_stack	*stack_b;

	if (argc < 2)
		return (0);
	z.i = 1;
	z.j = 1;
	z.res = NULL;
	a = NULL;
	stack_b = NULL;
	norm(argc, argv);
	while (z.i < argc)
	{
		z.res = ft_strjoin(z.res, argv[z.j]);
		z.res = ft_strjoin(z.res, " ");
		z.i++;
		z.j++;
	}
	z.b = ft_split(z.res, ' ');
	check_digits1(z.b);
	z.tab = sort_values(z.b);
	sort_by_index(z.tab, z.b, &a);
	main_part_2(&a, &stack_b);
	return (0);
}
