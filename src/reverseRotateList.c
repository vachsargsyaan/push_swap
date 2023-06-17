/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverseRotateList.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vacsargs <vacsargs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 16:15:56 by vacsargs          #+#    #+#             */
/*   Updated: 2023/06/17 15:32:49 by vacsargs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	reverse_rotate_a(t_stack **stack, int flag)
{
	t_stack	*temp;
	t_stack	*m;

	temp = *stack;
	m = *stack;
	if (stack)
	{
		while (temp->next != NULL)
			temp = temp->next;
		m->prev = temp;
		m->prev->next = m;
		temp->prev->next = NULL;
		m->prev->prev = NULL;
		*stack = m->prev;
	}
	if (flag == 1)
		write(1, "rra\n", 4);
}

void	reverse_rotate_b(t_stack **stack, int flag)
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
		m->prev->next = m;
		temp->prev->next = NULL;
		m->prev->prev = NULL;
		*stack = m->prev;
	}
	if (flag == 1)
		write(1, "rrb\n", 4);
}

void	rrr(t_stack **stack, t_stack **b, int flag)
{
	reverse_rotate_a(stack, 0);
	reverse_rotate_b(b, 0);
	if (flag == 1)
		write(1, "rrr\n", 4);
}
