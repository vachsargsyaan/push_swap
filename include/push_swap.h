/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vacsargs <vacsargs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 18:03:56 by vacsargs          #+#    #+#             */
/*   Updated: 2023/06/06 18:10:50 by vacsargs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

typedef struct s_stack
{
	int				data;
	int				index;
	struct s_stack	*next;
	struct s_stack	*prev;
}t_stack;

typedef struct s_var
{
	int	len;
	int	swap;
	int	i;
	int	j;
	int	flag;
}t_var;

int		main(int argc, char **argv);
char	**ft_split(char const *s, char c);
char	*ft_strdup(const char *s1);
size_t	ft_strlen(const char *str);
void	*ft_memcpy(void *dst, const void *src, size_t n);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char *s1, char const *s2);
long	ft_atoi(const char *str);
void	check_digits(char **number);
void	clean_zeros(char	**number);
void	is_digit_values(char **number);
void	ft_error(void);
void	is_digit_sorting(char	**number);
int		*sort_values(char **number);
int		*bubble_sort(int *tab, t_var *a);
void	sort_by_index(int *tab, char **number, t_stack *stack);
void	lst_push_back(t_stack **stack, t_stack *a);
t_stack	*list_new(int data, int index);

#endif