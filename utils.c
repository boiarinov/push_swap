/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: boiarinov <boiarinov@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 18:09:06 by boiarinov         #+#    #+#             */
/*   Updated: 2023/11/16 20:42:40 by boiarinov        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_lstadd_new(int value)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (0);
	new->value = value;
	new->cur = -1;
	new->next = 0;
	return (new);
}

void	create_index(t_list **stack)
{
	t_list	*node;
	int		cur;

	cur = 0;
	node = get_next_min(stack);
	while (node)
	{
		node->cur = cur;
		node = get_next_min(stack);
		cur++;
	}
}

int	get_len(t_list **stack, int cur)
{
	t_list	*node;
	int		len;

	len = 0;
	node = *stack;
	while (node)
	{
		if (node->cur == cur)
			break ;
		len++;
		node = node->next;
	}
	return (len);
}

int	get_min(t_list **stack, int n)
{
	t_list	*node;
	int		min;

	node = *stack;
	min = node->cur;
	while (node->next)
	{
		node = node->next;
		if ((node->cur < min) && node->cur != n)
			min = node->cur;
	}
	return (min);
}

t_list	*get_next_min(t_list **stack)
{
	t_list	*node;
	t_list	*min;
	int		t;

	t = 0;
	min = NULL;
	node = *stack;
	while (node)
	{
		if (node->cur == -1 && (!t || node->value < min->value))
		{
			min = node;
			t = 1;
		}
		node = node->next;
	}
	return (min);
}
