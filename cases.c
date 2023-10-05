/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cases.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: boiarinov <boiarinov@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 11:39:07 by aboiarin          #+#    #+#             */
/*   Updated: 2023/10/05 23:41:11 by boiarinov        ###   ########.fr       */
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

void	p4(int *a, int *b, int size)
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

void	p5(int *a, int *b, int size)
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

void	if_five(int	*a, int *b, int size)
{
	int	i;

	i = 0;
	pb(a, b, size);
	pb(a, b, size);
	if_three(a, size);
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
	p4(a, b, size);
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
	p5(a, b, size);
}

void	if_more(void)
{
	return ;
}
