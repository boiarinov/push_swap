/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cases.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboiarin <aboiarin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 11:39:07 by aboiarin          #+#    #+#             */
/*   Updated: 2023/10/03 14:16:37 by aboiarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*smallest(int *a, unsigned int size)
{
	int	i;
	int	c;
	
	i = 0;
	c = a[i];
	while (++i < size)
	{
		if (c > a[i])
			c = a[i];
	}
	return (&a[i]);
}

void	if_three(int *a, unsigned int size)
{
	if (a[0] > a[1] && a[1] < a[2] && a[2] > a[0])
		sa(a);
	else if (a[0] > a[1] && a[1] > a[2] && a[2] < a[0])
	{
		sa(a);
		rra(a, size);
	}
	else if (a[0] > a[1] && a[1] < a[2] && a[2] < a[0])
		ra(a, size);
	else if (a[0] < a[1] && a[1] > a[2] && a[2] > a[0])
	{
		sa(a);
		ra(a, size);
	}
	else if (a[0] < a[1] && a[1] > a[2] && a[2] < a[0])
		rra(a, size);
}

void	if_more(int	*a, int *b, unsigned int size)
{
	int	i;
	int	s;

	i = 0;
	s = 0;
	while(i < size)
	{
		pb(smallest(a, size), b, size);
		i++;
	}
	while (i > 0)
	{
		pa(a, b, size);
		i--;
	}
}
