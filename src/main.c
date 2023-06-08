/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vacsargs <vacsargs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 18:03:51 by vacsargs          #+#    #+#             */
/*   Updated: 2023/06/08 20:34:48 by vacsargs         ###   ########.fr       */
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
	char	**b;
	int		*tab;
	t_var	z;
	t_stack	*a;

	if (argc < 2)
		return (0);
	z.i = 1;
	z.j = 1;
	res = NULL;
	a = NULL;
	while (z.i < argc)
	{
		res = ft_strjoin(res, argv[z.j]);
		res = ft_strjoin(res, " ");
		z.i++;
		z.j++;
	}
	b = ft_split(res, ' ');
	check_digits(b);
	tab = sort_values(b);
	sort_by_index(tab, b, &a);
	stack_sort(&a,(argc-1));
	while (a)
	{
		printf("%d  ", a->data);
		printf("%d\n",  a->index);
		a = a->next;
	}
	return (0);
}
