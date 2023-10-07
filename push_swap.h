/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: boiarinov <boiarinov@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 16:53:48 by aboiarin          #+#    #+#             */
/*   Updated: 2023/10/07 14:41:26 by boiarinov        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
//#include "../libft/libft.h"

void	if_three(int *a, int size);
void	if_four(int	*a, int *b, int size);
void	if_five(int	*a, int *b, int size);
void	if_more(int *a, int *b, int size);
void	sa(int *a, int size);
void	sb(int *b, int size);
void	ss(int *a, int *b, int size);
void	pa(int *a, int *b, int size);
void	pb(int *a, int *b, int size);
void	ra(int *a, int size);
void	rb(int *b, int size);
void	rr(int *a, int *b, int size);
void	rra(int *a, int size);
void	rrb(int *b, int size);
void	rrr(int *a, int *b, int size);
int     smallest(int *a, int size);