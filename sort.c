/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omar <omar@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 00:21:15 by omar              #+#    #+#             */
/*   Updated: 2023/04/16 17:48:05 by omar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_two(t_node **stack_a)
{
	if ((*stack_a)->data > (*stack_a)->next->data)
		sa(stack_a);
}

void	sort_three(t_node **stack_a)
{
	int	max_i;

	max_i = get_max_index(*stack_a);
	if (max_i == 0)
		ra(stack_a);
	else if (max_i == 1)
		rra(stack_a);
	if ((*stack_a)->data > (*stack_a)->next->data)
		sa(stack_a);
}

void	sort_four(t_node **stack_a, t_node **stack_b)
{
	int	min_i;

	min_i = get_min_index(*stack_a);
	if (min_i == 1)
		sa(stack_a);
	else if (min_i == 2)
	{
		rra(stack_a);
		rra(stack_a);
	}
	else if (min_i == 3)
		rra(stack_a);
	pb(stack_a, stack_b);
	if (!check_is_sorted(*stack_a))
		sort_three(stack_a);
	pa(stack_b, stack_a);
}

void	sort_five(t_node **stack_a, t_node **stack_b)
{
	int	min_i;

	min_i = get_min_index(*stack_a);
	if (min_i == 1)
		sa(stack_a);
	else if (min_i == 2)
	{
		ra(stack_a);
		ra(stack_a);
	}
	else if (min_i == 3)
	{
		rra(stack_a);
		rra(stack_a);
	}
	else if (min_i == 4)
		rra(stack_a);
	pb(stack_a, stack_b);
	if (!check_is_sorted(*stack_a))
		sort_four(stack_a, stack_b);
	pa(stack_b, stack_a);
}

void	sort_big(t_node **stack_a, t_node **stack_b, int *tab)
{
	int	n;
	int	middle;
	int	offset;
	int	start;
	int	end;
	
	fillthis(stack_a, &n, &middle, &offset);
	start = middle - offset;
	end = middle + offset;
	while (*stack_a)
	{
		laststack_a(stack_a, stack_b);
		while(*stack_a)
		{
			n = search(stack_a, tab, start, end);
			if (n == ft_lstsize(*stack_a))
			{
				updatestartend(&start, &end, middle, offset);
				break ;
			}
			condition(stack_a, stack_b, tab, n, middle);
		}
	}
	backtostack_a(stack_a, stack_b, tab);
}
