/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboiarin <aboiarin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:37:16 by aboiarin          #+#    #+#             */
/*   Updated: 2023/10/03 15:44:20 by aboiarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(int *a, int *b, int size)
{
	int	t;
	int	c;
	int	i;

	c = 0;
	i = 0;
	while (size > 0)
	{
		if (b[size] != 0)
		{
			c = 1;
			break ;
		}
		size--;
	}
	if (c != 0 && a[i] == 0)
	{
		t = b[size];
		b[size] = 0;
		a[i] = t;
		i++;
	}
	printf("pa\n");
}

void	pb(int *a, int *b, int size)
{
	int	t;
	int	c;
	int	i;

	c = 0;
	i = 0;
	while (size > 0)
	{
		if (a[size] != 0)
		{
			c = 1;
			break ;
		}
		size--;
	}
	if (c != 0 && b[i] == 0)
	{
		t = a[size];
		a[size] = 0;
		b[i] = t;
		i++;
	}
	printf("pb\n");
}
