/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   if_more.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboiarin <aboiarin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 17:34:02 by aboiarin          #+#    #+#             */
/*   Updated: 2023/11/01 17:40:01 by aboiarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	smallest(int *a, int size)
{
	int	r;
	int	i;

	i = 0;
	r = 0;
	while (i <= size)
	{
		if (a[i] != 0)
		{
			r = a[i];
			break ;
		}
		i++;
	}
	i = 0;
	while (i <= size)
	{
		if (r != 0 && r > a[i] && a[i] != 0)
			r = a[i];
		i++;
	}
	if (r == 0)
		return (-1);
	return (r);
}

int	current_array_size(int *a, int size)
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	while (i <= size)
	{
		if (a[i] != 0)
			c++;
		i++;
	}
	return (c);
}

int	top_index(int *a, int size)
{
	int	i;
	int	t;

	i = 0;
	t = 0;
	while (i <= size)
	{
		if (a[i] != 0)
		{
			t = i;
			break ;
		}
		i++;
	}
	return (t);
}

void	if_more(int *a, int *b, int size)
{
	int	t;
	int	i;
	int	index;
	int	j;

	i = 0;
	t = 0;
	j = 0;
	index = 0;
	while (j < size)
	{
		t = smallest(a, size);
		ft_printf("Smallest: %i\n", t);
		if (t > 0)
		{
			i = 0;
			while (i <= size)
			{
				if (t == a[i] && t != 0)
				{
					index = i;
					break ;
				}
				i++;
			}
			ft_printf("Index: %i\n", index);
			if (index == top_index(a, size))
				pb(a, b, size);
			else if (a[index] == a[size])
			{
				rra(a, size);
				pb(a, b, size);
			}
			else
			{
				i = index;
				while (i != top_index(a, size))
				{
					ra(a, size);
					i--;
				}
				pb(a, b, size);
			}
			i = 0;
			while (i <= size)
			{
				ft_printf("%i ", a[i]);
				i++;
			}
			ft_printf("\n");
			i = 0;
			while (i <= size)
			{
				ft_printf("%i ", b[i]);
				i++;
			}
			ft_printf("\n");
		}
		else
			break ;
		j++;
	}
	i = 0;
	while (i <= size)
	{
		ft_printf("%i ", a[i]);
		i++;
	}
	ft_printf("\n");
	i = 0;
	while (i <= size)
	{
		ft_printf("%i ", b[i]);
		i++;
	}
	ft_printf("\n");
	i = 0;
	while (i <= size)
	{
		pa(a, b, size);
		i++;
	}
	i = 0;
	while (i <= size)
	{
		ft_printf("%i ", a[i]);
		i++;
	}
	ft_printf("\n");
	i = 0;
	while (i <= size)
	{
		ft_printf("%i ", b[i]);
		i++;
	}
	ft_printf("\n");
}
