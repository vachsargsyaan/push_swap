/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vacsargs <vacsargs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 18:03:51 by vacsargs          #+#    #+#             */
/*   Updated: 2023/06/06 18:15:30 by vacsargs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_error(void)
{
	write (1, "Error\n", 6);
	exit(1);
}

int	main(int argc, char **argv)
{
	char	*res;
	char	**a;
	int		*tab;
	t_var	z;
	t_stack	b;

	if (argc < 2)
		return (0);
	z.i = 1;
	z.j = 1;
	res = NULL;
	while (z.i < argc)
	{
		res = ft_strjoin(res, argv[z.j]);
		res = ft_strjoin(res, " ");
		z.i++;
		z.j++;
	}
	a = ft_split(res, ' ');
	check_digits(a);
	tab = sort_values(a);
	sort_by_index(tab, a, &b);
	return (0);
}
