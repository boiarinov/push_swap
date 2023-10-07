/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: boiarinov <boiarinov@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 18:09:06 by boiarinov         #+#    #+#             */
/*   Updated: 2023/10/07 15:25:00 by boiarinov        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	smallest(int *a, int size)
{
	int	i;
	int	t;
	int	index;

	i = size;
	t = 0;
	index = 0;
	while (i > 0)
	{
		if (a[i] != 0)
		{
			t = a[i];
			break ;
		}
		i--;
	}
	while (i > 0)
	{
		if (t > a[i] && a[i] != 0)
		{
			t = a[i];
			index = i;
		}
		i--;
	}
	a[index] = 0;
	return (t);
}
