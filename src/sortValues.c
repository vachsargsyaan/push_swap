/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortValues.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vacsargs <vacsargs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 17:06:49 by vacsargs          #+#    #+#             */
/*   Updated: 2023/06/15 17:06:08 by vacsargs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	*sort_values(char **number)
{
	int		*tab;
	t_var	a;

	a.i = 0;
	while (number[a.i] != NULL)
		a.i++;
	tab = malloc(sizeof(int) * a.i);
	a.len = a.i;
	a.i = 0;
	while (number[a.i] != NULL)
	{
		tab[a.i] = ft_atoi(number[a.i]);
		a.i++;
	}
	tab = bubble_sort(tab, &a);
	return (tab);
}

int	*bubble_sort(int *tab, t_var *a)
{
	a->i = 0;
	a->flag = 1;
	while (a->flag && (a->i < a->len))
	{
		a->j = 0;
		a->flag = 0;
		while (a->j < a->len - 1 - a->i)
		{
			if (tab[a->j] > tab[a->j + 1])
			{
				a->swap = tab[a->j];
				tab[a->j] = tab[a->j + 1];
				tab[a->j + 1] = a->swap;
				a->flag = 1;
			}
			a->j++;
		}
		a->i++;
	}	
	return (tab);
}

void	sort_by_index(int *tab, char **number, t_stack **stack)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (number[j])
	{
		if (ft_atoi(number[j]) == tab[i])
		{
			lst_push_back(stack, list_new(tab[i], i));
			j++;
			i = 0;
		}
		else
			i++;
	}
}

void	lst_push_back(t_stack **stack, t_stack *a)
{
	t_stack	*temp;

	if (!a)
		return ;
	temp = *stack;
	if (!*stack)
	{
		*stack = a;
		a->next = NULL;
		return ;
	}
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = a;
	a->prev = temp;
	a->next = NULL;
}

t_stack	*list_new(int data, int index)
{
	t_stack	*a;

	a = (t_stack *)malloc(sizeof(t_stack));
	a->data = data;
	a->index = index;
	a->next = NULL;
	a->prev = NULL;
	return (a);
}
