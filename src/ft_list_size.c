/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vacsargs <vacsargs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 18:25:08 by vacsargs          #+#    #+#             */
/*   Updated: 2023/06/13 17:15:27 by vacsargs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_list_size(t_stack *begin_list)
{
	int		i;
	t_stack	*t;

	i = 0;
	t = begin_list;
	while (t != NULL)
	{
		t = t->next;
		i++;
	}
	return (i);
}

void norm(int argc, char **argv)
{
	int i;
	int	j;
	
	i = 0;
	j = 0;
	while (j < argc)
	{
		i = 0;
		while(argv[j][i] == ' ' || argv[j][i] == '\t')
			i++;
		if (argv[j][i] == '\0')
			ft_error();
		j++;	
	}
	
}