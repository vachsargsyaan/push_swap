/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotateList.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vacsargs <vacsargs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 16:08:49 by vacsargs          #+#    #+#             */
/*   Updated: 2023/06/17 15:34:36 by vacsargs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	rotate_a(t_stack **stack, int flag)
{
	t_stack	*temp;
	t_stack	*m;

	temp = *stack;
	m = *stack;
	if (*stack)
	{
		while (temp->next != NULL)
			temp = temp->next;
		m->prev = temp;
		temp->next = m;
		*stack = (*stack)->next;
		m->next->prev = NULL;
		m->next = NULL;
	}
	if (flag == 1)
		write(1, "ra\n", 3);
}

void	rotate_b(t_stack **stack, int flag)
{
	t_stack	*temp;
	t_stack	*m;

	if (*stack)
	{
		temp = *stack;
		m = *stack;
		while (temp->next != NULL)
			temp = temp->next;
		m->prev = temp;
		temp->next = m;
		*stack = (*stack)->next;
		m->next->prev = NULL;
		m->next = NULL;
	}
	if (flag == 1)
		write(1, "rb\n", 3);
}

void	rr(t_stack **stack, t_stack **b, int flag)
{
	rotate_a(stack, 0);
	rotate_b(b, 0);
	if (flag == 1)
		write(1, "rr\n", 3);
}
