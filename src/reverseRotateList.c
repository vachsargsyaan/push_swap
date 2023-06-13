/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverseRotateList.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vacsargs <vacsargs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 16:15:56 by vacsargs          #+#    #+#             */
/*   Updated: 2023/06/13 16:18:44 by vacsargs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	reverse_rotate_a(t_stack **stack)
{
	t_stack	*temp;
	t_stack	*m;

	temp = *stack;
	m = *stack;
	while (temp->next != NULL)
		temp = temp->next;
	m->prev = temp;
	m->prev->next = m;
	temp->prev->next = NULL;
	m->prev->prev = NULL;
	*stack = m->prev;
	write(1, "rra\n", 4);
}

void	reverse_rotate_b(t_stack **stack)
{
	t_stack	*temp;
	t_stack	*m;

	temp = *stack;
	m = *stack;
	while (temp->next != NULL)
		temp = temp->next;
	m->prev = temp;
	m->prev->next = m;
	temp->prev->next = NULL;
	m->prev->prev = NULL;
	*stack = m->prev;
	write(1, "rrb\n", 4);
}

void	rrr(t_stack **stack, t_stack **b)
{
	t_stack	*temp;
	t_stack	*m;

	temp = *stack;
	m = *stack;
	while (temp->next != NULL)
		temp = temp->next;
	m->prev = temp;
	m->prev->next = m;
	temp->prev->next = NULL;
	m->prev->prev = NULL;
	*stack = m->prev;
	temp = *b;
	m = *b;
	while (temp->next != NULL)
		temp = temp->next;
	m->prev = temp;
	m->prev->next = m;
	temp->prev->next = NULL;
	m->prev->prev = NULL;
	*b = m->prev;
	write(1, "rrr\n", 4);
}


