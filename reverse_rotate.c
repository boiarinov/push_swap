/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: boiarinov <boiarinov@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:39:28 by aboiarin          #+#    #+#             */
/*   Updated: 2023/10/06 17:44:52 by boiarinov        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(int *a, int size)
{
	int	t;
	int	i;

	t = a[size];
	i = size;
	while (a[i - 1] != 0)
	{
		a[i] = a[i - 1];
		i--;
	}
	a[i] = t;
	printf("rra\n");
}

void	rrb(int *b, int size)
{
	int	t;
	int	i;

	t = b[size];
	i = size;
	while (b[i - 1] != 0)
	{
		b[i] = b[i - 1];
		i--;
	}
	b[i] = t;
	printf("rrb\n");
}

void	rrr(int *a, int *b, int size)
{
	rra(a, size);
	rrb(b, size);
	printf("rrr\n");
}
