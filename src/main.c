/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vacsargs <vacsargs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 18:03:51 by vacsargs          #+#    #+#             */
/*   Updated: 2023/06/13 17:15:00 by vacsargs         ###   ########.fr       */
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
	int		i;
	t_var	z;
	t_stack	*a;
	t_stack	*stack_b;

	if (argc < 2)
		return (0);
	z.i = 1;
	z.j = 1;
	res = NULL;
	a = NULL;
	stack_b = NULL;

	norm(argc,argv);
	while (z.i < argc)
	{
		res = ft_strjoin(res, argv[z.j]);
		res = ft_strjoin(res, " ");
		z.i++;
		z.j++;
	}
	printf("%s", res);
	b = ft_split(res, ' ');
	check_digits(b);
	tab = sort_values(b);
	sort_by_index(tab, b, &a);
	i = ft_list_size(a);
	stack_sort(&a, &stack_b, i);
	// while (a)
	// {
	// 	printf("%d\n", a->data);
	// 	a = a->next;
	// }
	// printf("\n\n\n");
	// while (stack_b)
	// {
	// 	printf("%d  ", stack_b->data);
	// 	stack_b = stack_b->next;
	// }
	return (0);
}
