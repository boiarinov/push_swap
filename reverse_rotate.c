/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboiarin <aboiarin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:39:28 by aboiarin          #+#    #+#             */
/*   Updated: 2023/10/03 16:38:59 by aboiarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(int *a, int size)
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
	printf("rra\n");
}

void	rrb(int *b, int size)
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
	printf("rrb\n");
}

void	rrr(int *a, int *b, int size)
{
	rra(a, size);
	rrb(b, size);
	printf("rrr\n");
}
