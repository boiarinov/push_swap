/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: boiarinov <boiarinov@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:38:33 by aboiarin          #+#    #+#             */
/*   Updated: 2023/11/16 20:35:17 by boiarinov        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	rotate(t_list **stack)
{
	t_list	*node;
	t_list	*last;

	if (ft_lstsize(*stack) < 2)
		return (1);
	node = *stack;
	last = ft_lstlast(node);
	*stack = node->next;
	node->next = NULL;
	last->next = node;
	return (0);
}

int	ra(t_list **a)
{
	if (rotate(a) == 1)
		return (0);
	write(1, "ra\n", 3);
	return (0);
}

int	rb(t_list **b)
{
	if (rotate(b) == 1)
		return (0);
	write(1, "ra\n", 3);
	return (0);
}
