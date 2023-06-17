/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_ops.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vacsargs <vacsargs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 17:47:24 by vacsargs          #+#    #+#             */
/*   Updated: 2023/06/15 16:52:39 by vacsargs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	stack_sort(t_stack **stack, t_stack **b, int i)
{
	if (i <= 3)
		tree_values_sort(stack, i);
	else if (i >= 4 && i <= 12)
		competitionln_range(stack, b);
	else
		butter_fly(stack, b, i);
}
