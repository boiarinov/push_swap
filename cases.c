/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cases.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboiarin <aboiarin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 11:39:07 by aboiarin          #+#    #+#             */
/*   Updated: 2023/10/24 16:53:56 by aboiarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	if_three(int *a, int size)
{
	if (a[size - 2] > a[size - 1] && a[size - 1] < a[size]
		&& a[size] > a[size - 2])
		sa(a, size);
	else if (a[size - 2] > a[size - 1] && a[size - 1] > a[size]
		&& a[size] < a[size - 2])
	{
		sa(a, size);
		rra(a, size);
	}
	else if (a[size - 2] > a[size - 1] && a[size - 1] < a[size]
		&& a[size] < a[size - 2])
		ra(a, size);
	else if (a[size - 2] < a[size - 1] && a[size - 1] > a[size]
		&& a[size] > a[size - 2])
	{
		sa(a, size);
		ra(a, size);
	}
	else if (a[size - 2] < a[size - 1] && a[size - 1] > a[size]
		&& a[size] < a[size - 2])
		rra(a, size);
}

void	if_four(int	*a, int *b, int size)
{
	pb(a, b, size);
	if_three(a, size);
	pl(a, b, size);
}

void	if_five(int	*a, int *b, int size)
{
	pb(a, b, size);
	pb(a, b, size);
	if_three(a, size);
	pf(a, b, size);
	pl(a, b, size);
}

int	if_sorted(int *a, int size)
{
	int	i;
	int	c;

	i = 0;
	c = 1;
	while (i < size)
	{
		if (a[i] > a[i + 1])
			c = 0;
		i++;
	}
	return (c);
}
