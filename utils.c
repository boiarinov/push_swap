/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboiarin <aboiarin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 18:09:06 by boiarinov         #+#    #+#             */
/*   Updated: 2023/10/24 17:11:32 by aboiarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pf(int *a, int *b, int size)
{
	if (a[size - 2] > b[size - 1])
		pa(a, b, size);
	else if (a[size - 2] < b[size - 1] && a[size - 1] > b[size - 1])
	{
		pa(a, b, size);
		sa(a, size);
	}
	else if (a[size - 1] < b[size - 1] && a[size] > b[size - 1])
	{
		rra(a, size);
		pa(a, b, size);
		rra(a, size);
		rra(a, size);
	}
	else if (a[size] < b[size - 1])
	{
		pa(a, b, size);
		ra(a, size);
	}
}

void	pl(int *a, int *b, int size)
{
	if (a[size - 3] > b[size])
		pa(a, b, size);
	else if (a[size - 3] < b[size] && a[size - 2] > b[size])
	{
		ra(a, size);
		pa(a, b, size);
		rra(a, size);
	}
	else if (a[size - 2] < b[size] && a[size - 1] > b[size])
	{
		ra(a, size);
		pa(a, b, size);
		sa(a, size);
		rra(a, size);
	}
	else if (a[size - 1] < b[size] && a[size] > b[size])
	{
		rra(a, size);
		pa(a, b, size);
		ra(a, size);
		ra(a, size);
	}
	else if (a[size] < b[size])
		pl_2(a, b, size);
}

void	pl_2(int *a, int *b, int size)
{
	pa(a, b, size);
	ra(a, size);
}
