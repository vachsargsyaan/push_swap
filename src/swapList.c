/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swapList.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vacsargs <vacsargs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 15:45:26 by vacsargs          #+#    #+#             */
/*   Updated: 2023/06/17 15:25:37 by vacsargs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	swap_a(t_stack **stack, int flag)
{
	t_stack	*temp;
	int		swap;

	if (ft_list_size(*stack) > 1)
	{
		temp = *stack;
		swap = temp->data;
		temp->data = temp->next->data;
		temp->next->data = swap;
		swap = temp->index;
		temp->index = temp->next->index;
		temp->next->index = swap;
	}
	if (flag == 1)
		write(1, "sa\n", 3);
}

void	swap_b(t_stack **stack, int flag)
{
	t_stack	*temp;
	int		swap;

	if (ft_list_size(*stack) > 1)
	{
		temp = *stack;
		swap = temp->data;
		temp->data = temp->next->data;
		temp->next->data = swap;
		swap = temp->index;
		temp->index = temp->next->index;
		temp->next->index = swap;
	}
	if (flag == 1)
		write(1, "sb\n", 3);
}

void	ss(t_stack **stack, t_stack **b, int flag)
{
	t_stack	*temp;
	int		swap;

	if (ft_list_size(*stack) > 1)
	{
		temp = *stack;
		swap = temp->data;
		temp->data = temp->next->data;
		temp->next->data = swap;
		swap = temp->index;
		temp->index = temp->next->index;
		temp->next->index = swap;
	}
	if (ft_list_size(*b) > 1)
	{
		temp = *b;
		swap = temp->data;
		temp->data = temp->next->data;
		temp->next->data = swap;
		swap = temp->index;
		temp->index = temp->next->index;
		temp->next->index = swap;
	}
	if (flag == 1)
		write(1, "ss\n", 3);
}
