/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: boiarinov <boiarinov@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:39:28 by aboiarin          #+#    #+#             */
/*   Updated: 2023/11/16 20:35:17 by boiarinov        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	reverse_rotate(t_list **stack)
{
	t_list	*node;
	t_list	*last;

	if (ft_lstsize(*stack) < 2)
		return (1);
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
	return (0);
}

/*rra (reverse rotate a): Shift down all elements of stack a by 1.
The last element becomes the first one.*/
int	rra(t_list **a)
{
	if (reverse_rotate(a) == 1)
		return (0);
	write (1, "rra\n", 4);
	return (0);
}
