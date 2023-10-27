/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboiarin <aboiarin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 16:53:41 by aboiarin          #+#    #+#             */
/*   Updated: 2023/10/27 15:39:24 by aboiarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	malloc_error(int *a, int *b)
{
	if (a == 0 || b == 0)
	{
		ft_printf("Malloc error\n");
		return (1);
	}
	return (0);
}

int	if_duplicate(int new, int *a, int size)
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	while (i < size && a[i] != 0)
	{
		if (new == a[i])
		{
			c = 1;
			break ;
		}
		i++;
	}
	return (c);
}

int	arrays(int *a, int *b, char **argv, int size)
{
	int	i;
	int	j;
	int	c;
	int	t;

	i = 0;
	j = 1;
	c = 0;
	while (i < size)
	{
		t = ft_atoi(argv[j]);
		if (!t || t < 0 || t > INT_MAX || if_duplicate(t, a, size) == 1)
		{
			c = 1;
			break ;
		}
		else
		{
			a[i] = t;
			b[i] = 0;
			i++;
		}
		j++;
	}
	return (c);
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
	else
		return ;
	if (!if_sorted(a, size - 1))
		ft_printf("Sorting error\n");
}

/*Delete array printing before submission*/
int	main(int argc, char **argv)
{
	int				*a;
	int				*b;
	int				i;
	int				size;

	i = 0;
	if (argc > 2)
	{
		size = argc - 1;
		a = (int *)malloc(sizeof(int) * size);
		b = (int *)malloc(sizeof(int) * size);
		if (malloc_error(a, b))
			return (0);
		ft_memset(a, 0, sizeof(int));
		ft_memset(b, 0, sizeof(int));
		if (arrays(a, b, argv, size) == 0)
			ft_sort(a, b, size);
		else
			ft_printf("Error\n");
/*		i = 0;
		while (i < size)
		{
			ft_printf("%i ", a[i]);
			i++;
		}*/
		free(a);
		free(b);
	}
	return (0);
}
