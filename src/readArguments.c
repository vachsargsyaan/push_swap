/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   readArguments.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vacsargs <vacsargs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 15:29:42 by vacsargs          #+#    #+#             */
/*   Updated: 2023/06/17 15:30:37 by vacsargs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/checker.h"

void	check777(char *line, t_stack **a, t_stack **b)
{
	if (ft_strnstr(line, "rrr\n"))
		rrr(a, b, 0);
	else if (ft_strnstr(line, "rrb\n"))
		reverse_rotate_b(b, 0);
	else if (ft_strnstr(line, "rra\n"))
		reverse_rotate_a(a, 0);
	else if (ft_strnstr(line, "rr\n"))
		rr(a, b, 0);
	else if (ft_strnstr(line, "rb\n"))
		rotate_b(b, 0);
	else if (ft_strnstr(line, "ra\n"))
		rotate_a(a, 0);
	else if (ft_strnstr(line, "pb\n"))
		push_b(a, b, 0);
	else if (ft_strnstr(line, "pa\n"))
		push_a(b, a, 0);
	else if (ft_strnstr(line, "ss\n"))
		ss(a, b, 0);
	else if (ft_strnstr(line, "sb\n"))
		swap_b(b, 0);
	else if (ft_strnstr(line, "sa\n"))
		swap_a(a, 0);
	else
		ft_error();
}

void	is_digit_sorting_bonus(t_stack **a, t_stack **b)
{
	t_stack	*tmp;

	tmp = *a;
	if (*a)
	{
		while (tmp->next != NULL)
		{
			if (tmp->index < tmp->next->data)
				tmp = tmp->next;
			else
			{
				write(1, "KO\n", 3);
				return ;
			}
		}
	}
	if (!(*b))
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
}

void	main_part_2(t_stack **a, t_stack **b)
{
	char	*line;

	while (1)
	{
		line = get_next_line(0);
		if (line == NULL)
			break ;
		check777(line, a, b);
		free(line);
	}
	is_digit_sorting_bonus(a, b);
}
