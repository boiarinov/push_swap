/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: boiarinov <boiarinov@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:37:53 by aboiarin          #+#    #+#             */
/*   Updated: 2023/11/16 21:39:15 by boiarinov        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_list **stack)
{
	t_list	*node;
	t_list	*next;
	int		tmp_val;
	int		tmp_index;

	if (ft_lstsize(*stack) < 2)
		return ;
	node = *stack;
	next = node->next;
	if (!node && !next)
		ft_printf("Error\n");
	tmp_val = node->value;
	tmp_index = node->cur;
	node->value = next->value;
	node->cur = next->cur;
	next->value = tmp_val;
	next->cur = tmp_index;
}

void	sa(t_list **a)
{
	swap(a);
	ft_printf("sa\n");
}

void	sb(t_list **b)
{
	swap(b);
	ft_printf("sb\n");
}

void	ss(t_list **a, t_list **b)
{
	swap(a);
	swap(b);
	ft_printf("ss\n");
}
