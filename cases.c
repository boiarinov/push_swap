/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cases.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: boiarinov <boiarinov@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 11:39:07 by aboiarin          #+#    #+#             */
/*   Updated: 2023/11/16 20:42:40 by boiarinov        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	if_three(t_list **a)
{
	t_list	*node;
	int		next_min;
	int		min;

	node = *a;
	min = get_min(a, -1);
	next_min = get_min(a, min);
	if (node->cur == next_min && node->next->cur == min)
		sa(a);
	else if (node->next->cur == next_min && node->cur != min)
	{
		sa(a);
		rra(a);
	}
	else if (node->next->cur == min && node->cur != next_min)
		ra(a);
	else if (node->cur == min && node->next->cur != next_min)
	{
		ra(a);
		sa(a);
		rra(a);
	}
	else if (node->cur == next_min && node->next->cur != min)
		rra(a);
}

void	if_four(t_list **a, t_list **b)
{
	int	len;

	len = get_len(a, get_min(a, -1));
	if (len == 1)
		ra(a);
	else if (len == 2)
	{
		ra(a);
		ra(a);
	}
	else if (len == 3)
		rra(a);
	if (if_sorted(a))
		return ;
	pb(a, b);
	if_three(a);
	pa(a, b);
}

void	if_five(t_list **a, t_list **b)
{
	int	len;

	len = get_len(a, get_min(a, -1));
	if (len == 1)
		ra(a);
	else if (len == 2)
	{
		ra(a);
		ra(a);
	}
	else if (len == 3)
	{
		rra(a);
		rra(a);
	}
	else if (len == 4)
		rra(a);
	if (if_sorted(a))
		return ;
	pb(a, b);
	if_four(a, b);
	pa(a, b);
}

int	if_sorted(t_list **stack)
{
	t_list	*node;
	int		c;

	node = *stack;
	c = 1;
	while (node && node->next)
	{
		if (node->value > node->next->value)
			c = 0;
		node = node->next;
	}
	return (c);
}

int	if_duplicate(int n, int i, char **str)
{
	int	t;

	++i;
	while (str[i])
	{
		t = ft_atoi(str[i]);
		if (t == n)
			return (1);
		i++;
	}
	return (0);
}

int	malloc_error(t_list **a, t_list **b)
{
	if (a == 0 || b == 0)
	{
		ft_printf("Error\n");
		return (1);
	}
	return (0);
}


