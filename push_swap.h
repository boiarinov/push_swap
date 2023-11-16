/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: boiarinov <boiarinov@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 16:53:48 by aboiarin          #+#    #+#             */
/*   Updated: 2023/11/16 21:18:04 by boiarinov        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <limits.h>

void	if_three(t_list **a);
void	if_four(t_list **a, t_list **b);
void	if_five(t_list **a, t_list **b);
void	if_more(t_list **a, t_list **b);
int		if_sorted(t_list **a);
int		if_duplicate(int n, int i, char **str);
int     if_num(char *str);
int		malloc_error(t_list **a, t_list **b);
int		sa(t_list **a);
int		sb(t_list **b);
int		ss(t_list **a, t_list **b);
int		pa(t_list **a, t_list **b);
int		pb(t_list **a, t_list **b);
int		ra(t_list **a);
int		rb(t_list **b);
int		rr(t_list **a, t_list **b);
int		rra(t_list **a);
int		rrb(t_list **b);
int		rrr(t_list **a, t_list **b);

t_list	*ft_lstadd_new(int value);
void	free_stack(t_list **stack);
void	create_index(t_list **a);

int		get_min(t_list **stack, int n);
t_list	*get_next_min(t_list **a);
int		get_len(t_list **stack, int index);

#endif