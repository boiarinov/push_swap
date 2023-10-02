/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboiarin <aboiarin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 16:53:41 by aboiarin          #+#    #+#             */
/*   Updated: 2023/10/02 15:10:01 by aboiarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "push_swap.h"

void    sa(int *a)
{
    int    t;

    t = a[0];
    a[0] = a[1];
    a[1] = t;
}

/*void	sb(int **b, unsigned int size)
{
	int	t;

	t = b[size];
	b[size] = b[size - 1];
	b[size - 1] = t;
}

void	ss(int **a, int **b, unsigned int size)
{
	sa(&a, size);
	sb(&b, size);
}

void	pa(int **a, int **b, unsigned int size)
{
	int	t;
	int	c;

	c = 0;
	while (size > 0)
	{
		if (b[size] != 0)
		{
			c = 1;
			break ;
		}
		size--;
	}
	if (c == 1)
	{
		t = a[size];
		a[size] = 0;
		b[size] = t;
	}
}

void	pb(int **a, int **b, unsigned int size)
{
	int	t;
	int	c;

	c = 0;
	while (size > 0)
	{
		if (a[size] != 0)
		{
			c = 1;
			break ;
		}
		size--;
	}
	if (c == 1)
	{
		t = b[size];
		b[size] = 0;
		a[size] = t;
	}
}*/

void    ra(int *a, unsigned int size)
{
    int    t;

    t = a[size];
    while (size > 1)
    {
        a[size] = a[size - 1];
        size--;
    }
    a[0] = t;
}
/*void	rb(int **b, unsigned int size)
{
	int	t;

	t = b[size];
	while (size > 1)
	{
		b[size] = b[size - 1];
		size--;
	}
	b[0] = t;
}

void	rr(int *a, int *b, unsigned int size)
{
	ra(&a, size);
	rb(&b, size);
}*/

void    rra(int *a, unsigned int size)
{
    int    t;
    int    i;

    t = a[0];
    i = 0;
    while (i <= size - 1)
    {
        a[i] = a[i + 1];
        i++;
    }
    a[size] = t;
}

/*void	rrb(int **b, unsigned int size)
{
	int	t;
	int	i;

	t = b[0];
	i = 0;
	while (i <= size - 1)
	{
		b[i] = b[i + 1];
		i++;
	}
	b[size] = t;
}

void	rrr(int *a, int *b, unsigned int size)
{
	rra(&a, size);
	rrb(&b, size);
}*/

int	main(int argc, char **argv)
{
	int				*a;
//	int				*b;
	int				i;
	int				j;
	unsigned int	size;

	i = 0;
	j = 1;
	if (argc > 1)
	{
		size = argc - 1;
		a = (int *)malloc(sizeof(int) * size);
//		b = (int *)malloc(sizeof(int) * size);
		if (a == 0) //|| b == 0)
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
		i = 0;
		if (size == 3)
			if_three(a, size);
		while (i < size)
		{
			printf("%i ", a[i]);
			i++;
		}
		free(a);
//		free(b);
	}
	return (0);
}
