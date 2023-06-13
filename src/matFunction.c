/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matFunction.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vacsargs <vacsargs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 19:05:52 by vacsargs          #+#    #+#             */
/*   Updated: 2023/06/11 19:18:15 by vacsargs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	log_2(int size)
{
	int	i;
	int	j;

	i = 2;
	j = 0;
	while (i <= size)
	{
		i *= 2;
		j++;
	}
	return (j);
}

int	root(int size)
{
	int	i;
	int	j;
	
	i = 2;
	j = log_2(size);
	while (i * i <= size)
		i++;
	i--;
	return (i + j);
}