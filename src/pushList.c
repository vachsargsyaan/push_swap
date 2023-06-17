/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushList.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vacsargs <vacsargs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 15:57:38 by vacsargs          #+#    #+#             */
/*   Updated: 2023/06/17 15:17:58 by vacsargs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	push_b(t_stack **stack, t_stack **b, int flag)
{
	t_stack	*temp;

	temp = *stack;
	if (ft_list_size(*stack) != 0)
	{
		if ((*stack)->next != NULL)
		{
			*stack = (*stack)->next;
			(*stack)->prev = NULL;
		}
		else
			*stack = (*stack)->next;
		temp->next = NULL;
		if (*b == NULL)
			*b = temp;
		else
		{
			temp->next = *b;
			(*b)->prev = temp;
			*b = temp;
		}
	}
	if (flag == 1)
		write(1, "pb\n", 3);
}

void	push_a(t_stack **stack, t_stack **b, int flag)
{
	t_stack	*temp;

	temp = *stack;
	if (ft_list_size(*stack) != 0)
	{
		if ((*stack)->next != NULL)
		{
			*stack = (*stack)->next;
			(*stack)->prev = NULL;
		}
		else
			*stack = (*stack)->next;
		temp->next = NULL;
		if (*b == NULL)
			*b = temp;
		else
		{
			temp->next = *b;
			(*b)->prev = temp;
			*b = temp;
		}
	}
	if (flag == 1)
		write(1, "pa\n", 3);
}
