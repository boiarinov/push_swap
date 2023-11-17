/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: boiarinov <boiarinov@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:38:33 by aboiarin          #+#    #+#             */
/*   Updated: 2023/11/17 22:19:48 by boiarinov        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_list **stack)
{
	t_list	*node;
	t_list	*last;

	if (ft_lstsize(*stack) < 2)
		return ;
	node = *stack;
	last = ft_lstlast(node);
	*stack = node->next;
	node->next = NULL;
	last->next = node;
}

void	ra(t_list **a)
{
	rotate(a);
	ft_printf("ra\n");
}

void	rb(t_list **b)
{
	rotate(b);
	ft_printf("rb\n");
}

void	rr(t_list **a, t_list **b)
{
	rotate(a);
	rotate(b);
	ft_printf("rr\n");
}
