/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: boiarinov <boiarinov@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:37:53 by aboiarin          #+#    #+#             */
/*   Updated: 2023/10/06 17:44:52 by boiarinov        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(int *a, int size)
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
	if (a[i] == 0)
		return ;
	t = a[i];
	a[i] = a[i + 1];
	a[i + 1] = t;
	printf("sa\n");
}

void	sb(int *b, int size)
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
	if (b[i] == 0)
		return ;
	t = b[i];
	b[i] = b[i + 1];
	b[i + 1] = t;
	printf("sb\n");
}

void	ss(int *a, int *b, int size)
{
	sa(a, size);
	sb(b, size);
	printf("ss\n");
}
