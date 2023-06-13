/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushList.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vacsargs <vacsargs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 15:57:38 by vacsargs          #+#    #+#             */
/*   Updated: 2023/06/13 16:04:22 by vacsargs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	push_b(t_stack **stack, t_stack **b)
{
	t_stack	*temp;
	t_stack	*sb;

	if (*stack != NULL)
	{
		temp = *stack;
		sb = *b;
		if (!sb)
		{
			*b = temp;
			sb = *b;
			*stack = (*stack)->next;
			(*stack)->prev = NULL;
			sb->next = NULL;
			sb->prev = NULL;
		}
		else if (ft_list_size(*stack) == 1)
		{
			sb->prev = temp;
			sb->prev->next = sb;
			*b = sb->prev;
			(*stack) = NULL;
			sb->prev->prev = NULL;
		}
		else
		{
			sb->prev = temp;
			*stack = (*stack)->next;
			sb->prev->next = sb;
			*b = sb->prev;
			sb->prev->prev = NULL;
			(*stack)->prev = NULL;
		}
	}
	write(1, "pb\n", 3);
}

void	push_a(t_stack **stack, t_stack **b)
{
		t_stack	*temp;
	t_stack	*sb;

	if (*stack != NULL)
	{
		temp = *stack;
		sb = *b;
		if (!sb)
		{
			*b = temp;
			sb = *b;
			*stack = (*stack)->next;
			(*stack)->prev = NULL;
			sb->next = NULL;
			sb->prev = NULL;
		}
		else if (ft_list_size(*stack) == 1)
		{
			sb->prev = temp;
			sb->prev->next = sb;
			*b = sb->prev;
			(*stack) = NULL;
			sb->prev->prev = NULL;
		}
		else
		{
			sb->prev = temp;
			*stack = (*stack)->next;
			sb->prev->next = sb;
			*b = sb->prev;
			sb->prev->prev = NULL;
			(*stack)->prev = NULL;
		}
	}
	write(1, "pa\n", 3);
}