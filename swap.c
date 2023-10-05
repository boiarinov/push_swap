/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: boiarinov <boiarinov@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:37:53 by aboiarin          #+#    #+#             */
/*   Updated: 2023/10/05 17:07:32 by boiarinov        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(int *a)
{
	int	t;
	int	i;

	i = 0;
	if (a[i] != 0)
	{
		t = a[i];
		a[i] = a[i + 1];
		a[i + 1] = t;
	}
	printf("sa\n");
}

void	sb(int *b)
{
	int	t;
	int	i;

	i = 0;
	if (b[i] != 0)
	{
		t = b[i];
		b[i] = b[i + 1];
		b[i + 1] = t;
	}
	printf("sb\n");
}

void	ss(int *a, int *b)
{
	sa(a);
	sb(b);
	printf("ss\n");
}
