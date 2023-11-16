/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   if_more.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: boiarinov <boiarinov@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 17:34:02 by aboiarin          #+#    #+#             */
/*   Updated: 2023/11/16 21:31:56 by boiarinov        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_bits(t_list	**stack)
{
	t_list	*node;
	int		index;
	int		bits;

	node = *stack;
	index = node->cur;
	bits = 0;
	while (node)
	{
		if (node->cur > index)
			index = node->cur;
		node = node->next;
	}
	while ((index >> bits) != 0)
		bits++;
	return (bits);
}

void	if_more(t_list **a, t_list **b)
{
	t_list	*node;
	int		i;
	int		j;
	int		size;
	int		bits;

	i = 0;
	node = *a;
	size = ft_lstsize(node);
	bits = get_bits(a);
	while (i < bits)
	{
		j = 0;
		while (j++ < size)
		{
			node = *a;
			if (((node->cur >> i) & 1) == 1)
				ra(a);
			else
				pb(a, b);
		}
		while (ft_lstsize(*b) != 0)
			pa(a, b);
		i++;
	}
}
