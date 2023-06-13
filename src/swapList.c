/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vacsargs <vacsargs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 15:45:26 by vacsargs          #+#    #+#             */
/*   Updated: 2023/06/13 15:52:35 by vacsargs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	swap_a(t_stack **stack)
{
	t_stack	*temp;
	int		swap;

	temp = *stack;
	swap = temp->data;
	temp->data = temp->next->data;
	temp->next->data = swap;
	swap = temp->index;
	temp->index = temp->next->index;
	temp->next->index = swap;
	write(1, "sa\n", 3);
}

void	swap_b(t_stack **stack)
{
	t_stack	*temp;
	int		swap;

	temp = *stack;
	swap = temp->data;
	temp->data = temp->next->data;
	temp->next->data = swap;
	swap = temp->index;
	temp->index = temp->next->index;
	temp->next->index = swap;
	write(1, "sb\n", 3);
}

void	ss(t_stack **stack, t_stack **b)
{
	t_stack	*temp;
	int		swap;

	temp = *stack;
	swap = temp->data;
	temp->data = temp->next->data;
	temp->next->data = swap;
	swap = temp->index;
	temp->index = temp->next->index;
	temp->next->index = swap;
	temp = *b;
	swap = temp->data;
	temp->data = temp->next->data;
	temp->next->data = swap;
	swap = temp->index;
	temp->index = temp->next->index;
	temp->next->index = swap;
	write(1, "ss\n", 3);
}
