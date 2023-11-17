/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: boiarinov <boiarinov@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 18:09:06 by boiarinov         #+#    #+#             */
/*   Updated: 2023/11/17 23:28:56 by boiarinov        ###   ########.fr       */
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
	new->pos = -1;
	new->next = 0;
	return (new);
}

void	create_index(t_list **stack)
{
	t_list	*node;
	int		pos;

	pos = 0;
	node = get_next_min(stack);
	while (node)
	{
		node->pos = pos;
		node = get_next_min(stack);
		pos++;
	}
}

int	get_len(t_list **stack, int pos)
{
	t_list	*node;
	int		len;

	len = 0;
	node = *stack;
	while (node)
	{
		if (node->pos == pos)
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
	min = node->pos;
	while (node->next)
	{
		node = node->next;
		if ((node->pos < min) && node->pos != n)
			min = node->pos;
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
		if (node->pos == -1 && (!t || node->value < min->value))
		{
			min = node;
			t = 1;
		}
		node = node->next;
	}
	return (min);
}
