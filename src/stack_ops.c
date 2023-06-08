/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_ops.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vacsargs <vacsargs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 17:47:24 by vacsargs          #+#    #+#             */
/*   Updated: 2023/06/08 20:34:34 by vacsargs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	swap_a(t_stack **stack)
{
	t_stack	*temp;
	int swap;
	
	temp = *stack;
	swap = temp->data;
	temp->data = temp->next->data;
	temp->next->data = swap;
	swap = temp->index;
	temp->index = temp->next->index;
	temp->next->index = swap;
	write(1, "sa\n", 3);
}

void	rotate_a(t_stack **stack)
{
	t_stack	*temp;
	t_stack	*m;


	temp = *stack;
	m = *stack;
	while (temp->next != NULL)
		temp = temp->next;
	m->next->prev = NULL;
	m->prev = temp;
	temp->next = m;
	*stack = (*stack)->next;
	m->next = NULL;
	write(1, "ra\n", 3);
}

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
	write(1, "rra\n", 3);
}

void	stack_sort(t_stack **stack, int i)
{
	t_stack	*temp;

	temp = *stack;
	if (i == 3)
	{
		if (temp->data < temp->next->data && temp->data < temp->next->next->data)
		{
			swap_a(stack);
			rotate_a(stack);
		}
		else if (temp->data > temp->next->data && temp->data < temp->next->next->data)
			swap_a(stack);
		else if (temp->data < temp->next->data && temp->data > temp->next->next->data)
			reverse_rotate_a(stack);
		else if (temp->data > temp->next->data && temp->data > temp->next->next->data)
		{
			if (temp->next->data > temp->next->next->data)
			{
				swap_a(stack);
				reverse_rotate_a(stack);
			}
			else
				rotate_a(stack);
		}
	}
	else if (i == 2)
		rotate_a(stack);
}
