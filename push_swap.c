/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboiarin <aboiarin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 16:53:41 by aboiarin          #+#    #+#             */
/*   Updated: 2023/10/03 14:02:04 by aboiarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "push_swap.h"

void	sa(int *a)
{
	int	t;

	t = a[0];
	a[0] = a[1];
	a[1] = t;
}

void	sb(int *b)
{
	int	t;

	t = b[0];
	b[0] = b[1];
	b[1] = t;
}

void	ss(int *a, int *b)
{
	sa(a);
	sb(b);
}

void	pa(int *a, int *b, unsigned int size)
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
}

void	pb(int *a, int *b, unsigned int size)
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
}

void	ra(int *a, unsigned int size)
{
	int	t;
	int	i;

	t = a[0];
	i = 0;
	while (i < size)
	{
		a[i] = a[i + 1];
		i++;
	}
	a[size] = t;
}

void	rb(int *b, unsigned int size)
{
	int	t;
	int	i;

	t = b[0];
	i = 0;
	while (i < size)
	{
		b[i] = b[i + 1];
		i++;
	}
	b[size] = t;
}

void	rr(int *a, int *b, unsigned int size)
{
	ra(a, size);
	rb(b, size);
}

void	rra(int *a, unsigned int size)
{
	int	t;
	int	i;

	t = a[size];
	i = size;
	while (i > 0)
	{
		a[i] = a[i - 1];
		i--;
	}
	a[0] = t;
}

void	rrb(int *b, unsigned int size)
{
	int	t;
	int	i;

	t = b[size];
	i = size;
	while (i > 0)
	{
		b[i] = b[i - 1];
		i--;
	}
	b[0] = t;
}

void	rrr(int *a, int *b, unsigned int size)
{
	rra(a, size);
	rrb(b, size);
}

int	main(int argc, char **argv)
{
	int				*a;
	int				*b;
	int				i;
	int				j;
	unsigned int	size;

	i = 0;
	j = 1;
	if (argc > 2)
	{
		size = argc - 1;
		a = (int *)malloc(sizeof(int) * size);
		b = (int *)malloc(sizeof(int) * size);
		if (a == 0 || b == 0)
		{
			printf("Malloc error\n");
			return (0);
		}
		while (i < size)
		{
			a[i] = atoi(argv[j]);
			i++;
			j++;
		}
		if (size == 3)
			if_three(a, size - 1);
		else if (size == 5)
			if_five(a, b, size - 1);
		i = 0;
		while (i < size)
		{
			printf("%i ", a[i]);
			i++;
		}
		free(a);
		free(b);
	}
	return (0);
}
