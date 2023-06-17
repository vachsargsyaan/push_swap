/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vacsargs <vacsargs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 15:39:46 by vacsargs          #+#    #+#             */
/*   Updated: 2023/06/17 15:28:47 by vacsargs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/checker.h"

int	ft_strnstr(char *hay, char *need)
{
	int	i;

	i = 0;
	while (hay[i] && need[i])
	{
		if (hay[i] != need[i])
			return (0);
		i++;
	}
	if (hay[i] == '\0' && need[i] == '\0')
		return (1);
	return (0);
}

void	check_digits1(char **number)
{
	int	i;
	int	j;

	i = 0;
	while (number[i])
	{
		j = 0;
		while (number[i][j])
		{
			if (j == 0 && (number[i][j] == '+' || number[i][j] == '-'))
				j++;
			if (number[i][j] < '0' || number[i][j] > '9')
				ft_error();
			j++;
		}
		i++;
	}
	clean_zeros1(number);
}

void	clean_zeros1(char	**number)
{
	int	i;
	int	j;
	int	c;
	int	f;

	i = 0;
	while (number[i])
	{
		j = 0;
		c = 0;
		if (number[i][j] == '+' || number[i][j] == '-')
			j++;
		if (number[i][j] == '0' || number[i][j + 1] == '0')
		{
			while (number[i][j] == '0')
				j++;
		}
			f = ft_strlen(number[i] + j);
		if (f > 10)
			ft_error();
		i++;
	}
	is_digit_values1(number);
}

void	is_digit_values1(char	**number)
{
	int	i;
	int	j;

	i = 0;
	while (number[i])
	{
		if (ft_atoi(number[i]) > 2147483647 || ft_atoi(number[i]) < -2147483648)
			ft_error();
		i++;
	}
	i = 0;
	while (number[i])
	{
		j = i + 1;
		while (number[j])
		{
			if (ft_atoi(number[i]) == ft_atoi(number[j]))
				ft_error();
			j++;
		}
		i++;
	}
}
