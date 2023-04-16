/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_helpers1.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omar <omar@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 01:09:55 by omar              #+#    #+#             */
/*   Updated: 2023/04/16 17:43:12 by omar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_n(t_node **stack_a)
{
	int	n;
	
	if (ft_lstsize(*stack_a) <= 10)
		n = 5;
	else if (ft_lstsize(*stack_a) <= 150)
		n = 8;
	else
		n = 18;
	return (n);
}

void	laststack_a(t_node **stack_a, t_node **stack_b)
{
	if (ft_lstsize(*stack_a) == 1)
		pb(stack_a, stack_b);
}

int	search(t_node **stack_a, int *arr, int start, int end)
{
	t_node	*tmp;
	int		i;

	tmp = (*stack_a);
	i = 0;
	while (tmp)
	{
		if (tmp->data >= arr[start] && tmp->data <= arr[end])
			return (i);
		i++;
		tmp = tmp->next;
	}
	return (i);
}

void	updatestartend(int *start, int *end, int middle, int offset)
{
	*start -= offset;
	*end += offset;
	if (*start < 0)
		*start = 0;
	if (*end > middle * 2 - 1)
		*end = middle * 2 - 1;
}

void	condition(t_node **stack_a, t_node **stack_b, int *tab, int n, int middle)
{
	condition1(stack_a, n);
	condition2(stack_a, n);
	pb(stack_a, stack_b);
	if ((*stack_b)->data < tab[middle])
		rb(stack_b);
}
