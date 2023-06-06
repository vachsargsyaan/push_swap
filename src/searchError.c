/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   searchError.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vacsargs <vacsargs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 13:06:47 by vacsargs          #+#    #+#             */
/*   Updated: 2023/06/05 16:32:58 by vacsargs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	check_digits(char **number)
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
	clean_zeros(number);
}

void	clean_zeros(char	**number)
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
	is_digit_values(number);
}

void	is_digit_values(char	**number)
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
	is_digit_sorting(number);
}

void	is_digit_sorting(char	**number)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (number[j])
	{
		if (ft_atoi(number[i]) < ft_atoi(number[j]))
		{
			i++;
			j++;
		}
		else
		{
			return ;
		}
	}
	exit(0);
}

long	ft_atoi(const char *str)
{
	long	a;
	long	b;

	a = 0;
	b = 1;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
		b *= -1;
	if (*str == '+' || *str == '-')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		a = a * 10 + *str - '0';
		str++;
	}
	return (a * b);
}
