/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: boiarinov <boiarinov@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 16:53:41 by aboiarin          #+#    #+#             */
/*   Updated: 2023/11/16 20:54:10 by boiarinov        ###   ########.fr       */
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



char	**create_args(int argc, char **argv)
{
	char	**str;

	if (argc == 2)
		str = ft_split(argv[1], ' ');
	else
		str = argv;
	return (str);
}

int	create_stack(t_list **a, int argc, char **argv)
{
	int		i;
	int		t;
	char	**str;
	t_list	*n;

	i = 0;
	str = create_args(argc, argv);
	if (argc > 2)
		i = 1;
	while (str[i])
	{
		t = ft_atoi(str[i]);
		if (t < INT_MIN || t > INT_MAX || if_duplicate(t, i, str))
			return (0);
		else
		{
			n = ft_lstadd_new(t);
			ft_lstadd_back(a, n);
		}
		i++;
	}
	create_index(a);
	return (1);
}

void	ft_sort(t_list **a, t_list **b)
{
	int	size;

	if (!if_sorted(a))
	{
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
	}
	else
		return ;
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
