/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cases.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboiarin <aboiarin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 11:39:07 by aboiarin          #+#    #+#             */
/*   Updated: 2023/10/03 16:38:59 by aboiarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	if_three(int *a, int size)
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

void	if_five(int	*a, int *b, int size)
{
	pb(a, b, size);
	pb(a, b, size);
	if_three(a, size);
	while (size != 0)
	{
		if (size == 3)
		{

		}
	}
}
