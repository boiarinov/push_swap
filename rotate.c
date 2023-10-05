/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: boiarinov <boiarinov@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:38:33 by aboiarin          #+#    #+#             */
/*   Updated: 2023/10/05 17:07:28 by boiarinov        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(int *a, int size)
{
	int	t;
	int	i;

	t = a[0];
	i = 0;
	if (a[i] != 0)
	{
		while (i < size)
		{
			a[i] = a[i + 1];
			i++;
		}
	}
	a[size] = t;
	printf("ra\n");
}

void	rb(int *b, int size)
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
	printf("rb\n");
}

void	rr(int *a, int *b, int size)
{
	ra(a, size);
	rb(b, size);
	printf("rr\n");
}
