/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboiarin <aboiarin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:37:53 by aboiarin          #+#    #+#             */
/*   Updated: 2023/10/03 15:38:02 by aboiarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(int *a)
{
	int	t;

	t = a[0];
	a[0] = a[1];
	a[1] = t;
	printf("sa\n");
}

void	sb(int *b)
{
	int	t;

	t = b[0];
	b[0] = b[1];
	b[1] = t;
	printf("sb\n");
}

void	ss(int *a, int *b)
{
	sa(a);
	sb(b);
	printf("ss\n");
}
