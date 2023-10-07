/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cases.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: boiarinov <boiarinov@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 11:39:07 by aboiarin          #+#    #+#             */
/*   Updated: 2023/10/07 15:26:34 by boiarinov        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	if_three(int *a, int size)
{
	if (a[size - 2] > a[size - 1] && a[size - 1] < a[size] && a[size] > a[size - 2])
		sa(a, size);
	else if (a[size - 2] > a[size - 1] && a[size - 1] > a[size] && a[size] < a[size - 2])
	{
		sa(a, size);
		rra(a, size);
	}
	else if (a[size - 2] > a[size - 1] && a[size - 1] < a[size] && a[size] < a[size - 2])
		ra(a, size);
	else if (a[size - 2] < a[size - 1] && a[size - 1] > a[size] && a[size] > a[size - 2])
	{
		sa(a, size);
		ra(a, size);
	}
	else if (a[size - 2] < a[size - 1] && a[size - 1] > a[size] && a[size] < a[size - 2])
		rra(a, size);
}

void	pf(int *a, int *b, int size)
{
	if (a[size - 2] > b[size - 1])
		pa(a, b, size);
	else if (a[size - 2] < b[size - 1] && a[size - 1] > b[size - 1])
	{
		pa(a, b, size);
		sa(a, size);
	}
	else if (a[size - 1] < b[size - 1] && a[size] > b[size - 1])
	{
		rra(a, size);
		pa(a, b, size);
		rra(a, size);
		rra(a, size);
	}
	else if (a[size] < b[size - 1])
	{
		pa(a, b, size);
		ra(a, size);
	}
}

void	pl(int *a, int *b, int size)
{
	if (a[size - 3] > b[size])
		pa(a, b, size);
	else if (a[size - 3] < b[size] && a[size - 2] > b[size])
	{
		ra(a, size);
		pa(a, b, size);
		rra(a, size);
	}
	else if (a[size - 2] < b[size] && a[size - 1] > b[size])
	{
		ra(a, size);
		pa(a, b, size);
		sa(a, size);
		rra(a, size);
	}
	else if (a[size - 1] < b[size] && a[size] > b[size])
	{
		rra(a, size);
		pa(a, b, size);
		ra(a, size);
		ra(a, size);
	}
	else if (a[size] < b[size])
	{
		pa(a, b, size);
		ra(a, size);
	}
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

void	if_more(int *a, int *b, int size)
{
	int	i;
	int	t;

	i = size;
	t = 0;
	while (i >= 1)
	{
		t = smallest(a, size);
		if (t == 0)
			break ;
		b[i] = t;
		i--;
	}
	i = 0;
	while (i <= size)
	{
		if (a[i] != 0)
		{
			a[size] = a[i];
			a[i] = 0;
			break ;
		}
		i++;
	}
	i = 0;
	while (i <= size)
	{
		printf("%i ", a[i]);
		i++;
	}
	printf("\n");
	i = 0;
	while (i <= size)
	{
		printf("%i ", b[i]);
		i++;
	}
	printf("\n");
	i = 0;
	while (i <= size)
	{
		pa(a, b, size);
		i++;
	}
}
