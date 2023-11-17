/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: boiarinov <boiarinov@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 16:53:41 by aboiarin          #+#    #+#             */
/*   Updated: 2023/11/17 23:21:02 by boiarinov        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_stack(t_list **stack)
{
	t_list	*node;
	t_list	*temp;

	node = *stack;
	temp = NULL;
	while (node)
	{
		temp = node;
		node = node->next;
		free(temp);
	}
	free(stack);
}

static char	**create_arr(int argc, char **argv)
{
	char	**arr;

	if (argc == 2)
		arr = ft_split(argv[1], ' ');
	else
		arr = argv;
	return (arr);
}

static int	create_stack(t_list **a, int argc, char **argv)
{
	int		i;
	long	t;
	char	**arr;
	t_list	*new;

	i = 0;
	arr = create_arr(argc, argv);
	if (argc > 2)
		i = 1;
	while (arr[i])
	{
		if (if_num(arr[i]))
		{
			t = ft_atol(arr[i]);
			if (t < INT_MIN || t > INT_MAX || if_duplicate((int)t, i, arr))
				return (0);
			else
			{
				new = ft_lstadd_new((int)t);
				ft_lstadd_back(a, new);
			}
		}
		else
			return (0);
		i++;
	}
	if (if_sorted(a))
		return (0);
	create_index(a);
	return (1);
}

void	ft_sort(t_list **a, t_list **b)
{
	int	size;

	size = ft_lstsize(*a);
	if (size == 2)
		sa(a);
	else if (size == 3)
		if_three(a);
	else if (size == 4)
		if_four(a, b);
	else if (size == 5)
		if_five(a, b);
	else
		if_more(a, b);
	if (!if_sorted(a))
		ft_printf("Error\n");
}

int	main(int argc, char **argv)
{
	t_list	**a;
	t_list	**b;

	if (argc < 2)
		return (0);
	a = (t_list **)malloc(sizeof(t_list *));
	b = (t_list **)malloc(sizeof(t_list *));
	if (malloc_error(a, b))
		return (0);
	*a = NULL;
	*b = NULL;
	if (create_stack(a, argc, argv))
		ft_sort(a, b);
	free_stack(a);
	free_stack(b);
	return (0);
}
