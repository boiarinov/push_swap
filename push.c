/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: boiarinov <boiarinov@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:37:16 by aboiarin          #+#    #+#             */
/*   Updated: 2023/11/16 21:39:18 by boiarinov        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_list **stack_to, t_list **stack_from)
{
	t_list	*t;
	t_list	*node_to;
	t_list	*node_from;

	if (ft_lstsize(*stack_from) == 0)
		return ;
	node_to = *stack_to;
	node_from = *stack_from;
	t = node_from;
	node_from = node_from->next;
	*stack_from = node_from;
	if (!node_to)
	{
		node_to = t;
		node_to->next = NULL;
		*stack_to = node_to;
	}
	else
	{
		t->next = node_to;
		*stack_to = t;
	}
}

void	pa(t_list **a, t_list **b)
{
	push(a, b);
	ft_printf("pa\n");
}

void	pb(t_list **a, t_list **b)
{
	push(b, a);
	ft_printf("pb\n");
}
