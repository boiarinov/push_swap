/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: boiarinov <boiarinov@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:39:28 by aboiarin          #+#    #+#             */
/*   Updated: 2023/11/17 22:19:48 by boiarinov        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate(t_list **stack)
{
	t_list	*node;
	t_list	*last;

	if (ft_lstsize(*stack) < 2)
		return ;
	node = *stack;
	last = ft_lstlast(node);
	while (node)
	{
		if (node->next->next == NULL)
		{
			node->next = NULL;
			break ;
		}
		node = node->next;
	}
	last->next = *stack;
	*stack = last;
}

void	rra(t_list **a)
{
	reverse_rotate(a);
	ft_printf("rra\n");
}

void	rrb(t_list **b)
{
	reverse_rotate(b);
	ft_printf("rrb\n");
}

void	rrr(t_list **a, t_list **b)
{
	reverse_rotate(a);
	reverse_rotate(b);
	ft_printf("rrr\n");
}
