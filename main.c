/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboiarin <aboiarin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 16:53:41 by aboiarin          #+#    #+#             */
/*   Updated: 2023/10/24 17:14:53 by aboiarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	malloc_error(int *a, int *b)
{
	if (a == 0 || b == 0)
	{
		ft_printf("Error\n");
		return (1);
	}
	return (0);
}

void	ft_sort(int *a, int *b, int size)
{
	if (!if_sorted(a, size - 1))
	{
		if (size == 3)
			if_three(a, size - 1);
		else if (size == 4)
			if_four(a, b, size - 1);
		else if (size == 5)
			if_five(a, b, size - 1);
		else
			if_more(a, b, size - 1);
	}
	if (!if_sorted(a, size -1))
		ft_printf("Sorting error\n");
}

int	main(int argc, char **argv)
{
	int				*a;
	int				*b;
	int				i;
	int				j;
	int				size;

	i = 0;
	j = 1;
	if (argc > 2)
	{
		size = argc - 1;
		a = (int *)malloc(sizeof(int) * size);
		b = (int *)malloc(sizeof(int) * size);
		if (malloc_error(a, b))
			return (0);
		while (i < size)
		{
			a[i] = ft_atoi(argv[j]);
			b[i] = 0;
			i++;
			j++;
		}
		ft_sort(a, b, size);
		i = 0;
		while (i < size)
		{
			ft_printf("%i ", a[i]);
			i++;
		}
		free(a);
		free(b);
	}
	return (0);
}
