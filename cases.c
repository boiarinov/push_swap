/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cases.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: boiarinov <boiarinov@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 11:39:07 by aboiarin          #+#    #+#             */
/*   Updated: 2023/11/17 23:39:39 by boiarinov        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	if_num(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
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

void	if_three(t_list **a)
{
	t_list	*node;
	int		next_min;
	int		min;

	node = *a;
	min = get_min(a, -1);
	next_min = get_min(a, min);
	if (node->pos == next_min && node->next->pos == min)
		sa(a);
	else if (node->next->pos == next_min && node->pos != min)
	{
		sa(a);
		rra(a);
	}
	else if (node->next->pos == min && node->pos != next_min)
		ra(a);
	else if (node->pos == min && node->next->pos != next_min)
	{
		ra(a);
		sa(a);
		rra(a);
	}
	else if (node->pos == next_min && node->next->pos != min)
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
