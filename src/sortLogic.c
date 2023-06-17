/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortLogic.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vacsargs <vacsargs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 19:16:51 by vacsargs          #+#    #+#             */
/*   Updated: 2023/06/17 15:26:48 by vacsargs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	competitionln_range(t_stack **stack, t_stack **b)
{
	int		i;
	t_stack	*temp;

	i = 0;
	while (ft_list_size(*stack) > 3)
	{
		temp = *stack;
		if (search_min_value(stack, i))
		{
			while ((*stack)->index != i)
				rotate_a(stack, 1);
			push_b(stack, b, 1);
			i++;
		}
		else
		{
			while ((*stack)->index != i)
				reverse_rotate_a(stack, 1);
			push_b(stack, b, 1);
			i++;
		}
	}
	tree_values_sort(stack, 3);
	while (*b != NULL)
		push_a(b, stack, 1);
}

void	tree_values_sort(t_stack **stack, int i)
{
	if (i != 2)
	{
		if ((*stack)->data > (*stack)->next->data
			&& (*stack)->data > (*stack)->next->next->data)
			rotate_a(stack, 1);
		else if ((*stack)->data < (*stack)->next->data
			&& (*stack)->next->data > (*stack)->next->next->data)
			reverse_rotate_a(stack, 1);
	}
	if ((*stack)->data > (*stack)->next->data)
		swap_a(stack, 1);
}

void	butter_fly(t_stack **stack, t_stack **b, int size)
{
	int	n;
	int	count;

	count = 0;
	n = root(size);
	while ((*stack))
	{
		if ((*stack)->index <= count)
		{
			push_b(stack, b, 1);
			rotate_b(b, 1);
			count++;
		}
		else if ((*stack)->index <= count + n)
		{
			push_b(stack, b, 1);
			count++;
		}
		else
			rotate_a(stack, 1);
	}
	size--;
	butter_fly_2(stack, b, size);
}

int	search_min_value(t_stack **stack, int i)
{
	int		j;
	t_stack	*temp;

	j = 0;
	temp = *stack;
	while (j < ft_list_size(*stack) / 2)
	{
		if (temp->index == i)
		{
			return (1);
			break ;
		}
		else
		{
			j++;
			temp = temp->next;
		}
	}
	return (0);
}

void	butter_fly_2(t_stack **stack, t_stack **b, int size)
{
	while (*b)
	{
		if (search_min_value(b, size) == 1)
		{
			while ((*b)->index != (size))
			{
				rotate_b(b, 1);
			}
			push_a(b, stack, 1);
			size--;
		}
		else
		{
			while ((*b)->index != size)
				reverse_rotate_b(b, 1);
			push_a(b, stack, 1);
			size--;
		}
	}
}
