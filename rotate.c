/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboiarin <aboiarin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:38:33 by aboiarin          #+#    #+#             */
/*   Updated: 2023/10/24 14:44:30 by aboiarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(int *a, int size)
{
	int	t;
	int	i;

	i = 0;
	while (i < size)
	{
		if (a[i] != 0)
		{
			t = a[i];
			while (i < size)
			{
				a[i] = a[i + 1];
				i++;
			}
			a[size] = t;
		}
		i++;
	}
	ft_printf("ra\n");
}

void	rb(int *b, int size)
{
	int	t;
	int	i;

	i = 0;
	while (i < size)
	{
		if (b[i] != 0)
		{
			t = b[i];
			while (i < size)
			{
				b[i] = b[i + 1];
				i++;
			}
			b[size] = t;
		}
		i++;
	}
	ft_printf("rb\n");
}

void	rr(int *a, int *b, int size)
{
	ra(a, size);
	rb(b, size);
	ft_printf("rr\n");
}
