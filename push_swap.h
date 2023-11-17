/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: boiarinov <boiarinov@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 16:53:48 by aboiarin          #+#    #+#             */
/*   Updated: 2023/11/17 23:57:05 by boiarinov        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <limits.h>

/*cases*/
int     if_num(char *str);
int		if_duplicate(int n, int i, char **str);
int		if_sorted(t_list **a);
void	if_three(t_list **a);
void	if_four(t_list **a, t_list **b);
void	if_five(t_list **a, t_list **b);
void	if_more(t_list **a, t_list **b);

/*utility functions*/
t_list	*ft_lstadd_new(int value);
void	create_index(t_list **a);
long	ft_atol(const char *str);
int		malloc_error(t_list **a, t_list **b);
void	free_stack(t_list **stack);

/*search functions*/
int		get_min(t_list **stack, int n);
t_list	*get_next_min(t_list **a);
int		get_len(t_list **stack, int index);

/*stack operations*/
void		sa(t_list **a);
void		sb(t_list **b);
void		ss(t_list **a, t_list **b);
void		pa(t_list **a, t_list **b);
void		pb(t_list **a, t_list **b);
void		ra(t_list **a);
void		rb(t_list **b);
void		rr(t_list **a, t_list **b);
void		rra(t_list **a);
void		rrb(t_list **b);
void		rrr(t_list **a, t_list **b);

#endif
