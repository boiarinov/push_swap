/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: boiarinov <boiarinov@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 16:53:41 by aboiarin          #+#    #+#             */
/*   Updated: 2023/10/05 23:40:44 by boiarinov        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
		if (a == 0 || b == 0)
		{
			printf("Error\n");
			return (0);
		}
		while (i < size)
		{
			a[i] = atoi(argv[j]);
			i++;
			j++;
		}
		if (size == 3)
			if_three(a, size - 1);
		else if (size == 5)
			if_five(a, b, size - 1);
		else
			if_more();
		i = 0;
		while (i < size)
		{
			printf("%i ", a[i]);
			i++;
		}
		free(a);
		free(b);
	}
	return (0);
}
