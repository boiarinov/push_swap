/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: boiarinov <boiarinov@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:37:16 by aboiarin          #+#    #+#             */
/*   Updated: 2023/10/07 15:28:47 by boiarinov        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(int *a, int *b, int size)
{
	int	t;
	int	i;

	i = 0;
	while (i < size)
	{
		if (b[i] != 0)
			break ;
		i++;
	}
	while (size >= 0)
	{
		if (a[size] == 0)
			break ;
		size--;
	}
	t = b[i];
	b[i] = 0;
	a[size] = t;
	printf("pa\n");
}

void	pb(int *a, int *b, int size)
{
	int	t;
	int	i;

	i = 0;
	while (i < size)
	{
		if (a[i] != 0)
			break ;
		i++;
	}
	while (size >= 0)
	{
		if (b[size] == 0)
			break ;
		size--;
	}
	t = a[i];
	a[i] = 0;
	b[size] = t;
	printf("pb\n");
}
