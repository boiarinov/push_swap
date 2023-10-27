/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   if_more.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboiarin <aboiarin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 17:34:02 by aboiarin          #+#    #+#             */
/*   Updated: 2023/10/27 13:22:28 by aboiarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_copy(int *copy, int size)
{
	int	i;
	int	j;
	int	t;

	i = 0;
	j = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (copy[i] > copy[j])
			{
				t = copy[i];
				copy[i] = copy[j];
				copy[j] = t;
			}
			j++;
		}
		i++;
	}
}

void	swap_1(int *copy, int *copy_swap, int *a, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		copy[i] = a[i];
		copy_swap[i] = a[i];
		i++;
	}
}

void	swap_2(int *copy, int *copy_swap, int *a, int size)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (copy_swap[i] == copy[j])
				a[i] = j;
			j++;
		}
		++i;
	}
}

void	swap_3(int *a, int *b, int size)
{
	int	maximum_number;
	int	maximum_bits;
	int	loop_through[2];

	maximum_number = size - 1;
	maximum_bits = 0;
	loop_through[0] = 0;
	loop_through[1] = 0;
	while ((maximum_number >> maximum_bits) != 0)
		++maximum_bits;
	while (loop_through[0] < maximum_bits)
	{
		loop_through[1] = 0;
		while (loop_through[1] < size)
		{
			if (((a[0] >> loop_through[0]) & 1) == 1)
				ra(a, size);
			else
				pb(a, b, size);
			++loop_through[1];
		}
		while (size != 0)
		{
			pa(a, b, size);
			++loop_through[0];
		}
	}
}

void	if_more(int *a, int *b, int size)
{
	int	*copy;
	int	*copy_swap;

	copy = (int *)malloc(sizeof(int) * size);
	copy_swap = (int *)malloc(sizeof(int) * size);
	swap_1(copy, copy_swap, a, size);
	sort_copy(copy, size);
	swap_2(copy, copy_swap, a, size);
	free(copy);
	free(copy_swap);
	swap_3(a, b, size);
}
