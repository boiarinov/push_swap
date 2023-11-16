/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: boiarinov <boiarinov@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:37:53 by aboiarin          #+#    #+#             */
/*   Updated: 2023/11/16 20:35:17 by boiarinov        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	swap(t_list **stack)
{
	t_list	*node;
	t_list	*next;
	int		tmp_val;
	int		tmp_index;

	if (ft_lstsize(*stack) < 2)
		return (1);
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
	return (0);
}

int	sa(t_list **a)
{
	if (swap(a) == 1)
		return (0);
	write(1, "sa\n", 3);
	return (0);
}

int	sb(t_list **b)
{
	if (swap(b) == 1)
		return (1);
	write(1, "sb\n", 3);
	return (0);
}
