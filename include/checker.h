/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vacsargs <vacsargs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 15:17:02 by vacsargs          #+#    #+#             */
/*   Updated: 2023/06/17 15:28:24 by vacsargs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include "../include/push_swap.h"
# include "../include/get_next_line_bonus.h"

int		main(int argc, char **argv);
void	main_part_2(t_stack **a, t_stack **b);
int		ft_strnstr(char *hay, char *need);
void	check_digits1(char **number);
void	clean_zeros1(char	**number);
void	is_digit_values1(char	**number);
void	check777(char *line, t_stack **a, t_stack **b);
void	is_digit_sorting_bonus(t_stack **a, t_stack **b);

#endif