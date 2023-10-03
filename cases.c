/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cases.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboiarin <aboiarin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 11:39:07 by aboiarin          #+#    #+#             */
/*   Updated: 2023/10/03 13:57:18 by aboiarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	if_three(int *a, unsigned int size)
{
	if (a[0] > a[1] && a[1] < a[2] && a[2] > a[0])
		sa(a);
	else if (a[0] > a[1] && a[1] > a[2] && a[2] < a[0])
	{
		sa(a);
		rra(a, size);
	}
	else if (a[0] > a[1] && a[1] < a[2] && a[2] < a[0])
		ra(a, size);
	else if (a[0] < a[1] && a[1] > a[2] && a[2] > a[0])
	{
		sa(a);
		ra(a, size);
	}
	else if (a[0] < a[1] && a[1] > a[2] && a[2] < a[0])
		rra(a, size);
}

void	if_five(int	*a, int *b, unsigned int size)
{
	pb(a, b, size);
	pb(a, b, size);
	if_three(a, size);
	if (b[size] > b[size - 1])
	{
		a[0] = b[size];
		a[1] = b[size - 1];
		b[size] = 0;
		b[size - 1] = 0;
	}
	else
	{
		a[0] = b[size - 1];
		a[1] = b[size];
		b[size - 1] = 0;
		b[size] = 0;
	}
}
