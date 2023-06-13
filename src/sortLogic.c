/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortLogic.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vacsargs <vacsargs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 19:16:51 by vacsargs          #+#    #+#             */
/*   Updated: 2023/06/13 16:24:11 by vacsargs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	competitionln_range(t_stack **stack, t_stack **b)
{
	int		i;
	int		flag;
	t_stack	*temp;
	int		j;

	j = 0;
	i = 0;
	flag = 0;
	temp = *stack;
	while (ft_list_size(*stack) > 3)
	{
		temp = *stack;
		if (search_min_value(stack,i))
		{
			while ((*stack)->index != i)
				rotate_a(stack);
			push_b(stack, b);
			i++;
		}
		else
		{
			while ((*stack)->index != i)
				reverse_rotate_a(stack);
			push_b(stack, b);
			i++;
		}
	}
	tree_values_sort(stack, 3);
	while (*b != NULL)
		push_a(b, stack);
}

void	tree_values_sort(t_stack **stack, int i)
{
	if (i != 2)
	{
		if ((*stack)->data > (*stack)->next->data
			&& (*stack)->data > (*stack)->next->next->data)
			rotate_a(stack);
		else if ((*stack)->data < (*stack)->next->data
			&& (*stack)->next->data > (*stack)->next->next->data)
			reverse_rotate_a(stack);
	}
	if ((*stack)->data > (*stack)->next->data)
		swap_a(stack);
}

void	butter_fly(t_stack **stack,t_stack **b, int size)
{
	int	n;
	int count;

	count = 0;
	n = root(size);
	
	while ((*stack))
	{
		if ((*stack)->index <= count)
		{
			push_b(stack,b);
			rotate_b(b);
			count++;
		}
		else if((*stack)->index <= count + n)
		{
			push_b(stack,b);
			count++;
		}
		else
			rotate_a(stack);
	}
	size--;
	while (*b)
	{
		if (search_min_value(b,size) == 1)
		{
			while ((*b)->index != (size))
			{
				rotate_b(b);
			}
			push_a(b, stack);
			size--;
		}
		else
		{
			while ((*b)->index != size)
				reverse_rotate_b(b);
			push_a(b, stack);
			size--;
		}
	}
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
