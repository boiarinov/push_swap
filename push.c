/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: boiarinov <boiarinov@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:37:16 by aboiarin          #+#    #+#             */
/*   Updated: 2023/11/16 20:35:17 by boiarinov        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	push(t_list **stack_to, t_list **stack_from)
{
	t_list	*tmp;
	t_list	*node_to;
	t_list	*node_from;

	if (ft_lstsize(*stack_from) == 0)
		return (1);
	node_to = *stack_to;
	node_from = *stack_from;
	tmp = node_from;
	node_from = node_from->next;
	*stack_from = node_from;
	if (!node_to)
	{
		node_to = tmp;
		node_to->next = NULL;
		*stack_to = node_to;
	}
	else
	{
		tmp->next = node_to;
		*stack_to = tmp;
	}
	return (0);
}

int	pa(t_list **a, t_list **b)
{
	if (push(a, b) == 1)
		return (1);
	ft_printf("pa\n");
	return (0);
}

int	pb(t_list **a, t_list **b)
{
	if (push(b, a) == 1)
		return (1);
	ft_printf("pb\n");
	return (0);
}
