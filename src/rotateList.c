/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotateList.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vacsargs <vacsargs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 16:08:49 by vacsargs          #+#    #+#             */
/*   Updated: 2023/06/13 16:11:42 by vacsargs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	rotate_a(t_stack **stack)
{
	t_stack	*temp;
	t_stack	*m;

	temp = *stack;
	m = *stack;
	while (temp->next != NULL)
		temp = temp->next;
	m->prev = temp;
	temp->next = m;
	*stack = (*stack)->next;
	m->next->prev = NULL;
	m->next = NULL;
	write(1, "ra\n", 3);
}

void	rotate_b(t_stack **stack)
{
	t_stack	*temp;
	t_stack	*m;

	temp = *stack;
	m = *stack;
	while (temp->next != NULL)
		temp = temp->next;
	m->prev = temp;
	temp->next = m;
	*stack = (*stack)->next;
	m->next->prev = NULL;
	m->next = NULL;
	write(1, "rb\n", 3);
}

void	rr(t_stack **stack, t_stack **b)
{
	t_stack	*temp;
	t_stack	*m;

	temp = *stack;
	m = *stack;
	while (temp->next != NULL)
		temp = temp->next;
	m->prev = temp;
	temp->next = m;
	*stack = (*stack)->next;
	m->next->prev = NULL;
	m->next = NULL;
	temp = *b;
	m = *b;
	while (temp->next != NULL)
		temp = temp->next;
	m->prev = temp;
	temp->next = m;
	*b = (*b)->next;
	m->next->prev = NULL;
	m->next = NULL;
	
}