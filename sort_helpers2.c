/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_helpers2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omar <omar@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 17:34:01 by omar              #+#    #+#             */
/*   Updated: 2023/04/16 18:03:52 by omar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	condition1(t_node **stack_a, int n)
{
	if (n <= ft_lstsize(*stack_a) / 2)
	{
		while (n > 0)
		{
			ra(stack_a);
			n--;
		}
	}
}

void	condition2(t_node **stack_a, int n)
{
	if (n > ft_lstsize(*stack_a) / 2)
	{
		while (n < ft_lstsize(*stack_a))
		{
			rra(stack_a);
			n++;
		}
	}
}

void	backtostack_a(t_node **stack_a, t_node **stack_b, int *tab)
{
	int	i;

	i = ft_lstsize(*stack_b) - 1;
	while (*stack_b)
	{
		ifup(stack_a, stack_b, tab, i);
		ifdown(stack_a, stack_b, tab, i);
		pa(stack_b, stack_a);
		if ((*stack_a)->next
			&& (*stack_a)->data > (*stack_a)->next->data)
		{
			sa(stack_a);
			i--;
		}
		i--;
	}
}

void	ifup(t_node **stack_a, t_node **stack_b, int *tab, int i)
{
	if (indexstack(*stack_b, tab[i]) < (i + 1) / 2)
	{
		while ((*stack_b)->data != tab[i])
		{
			if (i >= 1 && (*stack_b)->data == tab[i - 1])
				pa(stack_b, stack_a);
			else
				rb(stack_b);
		}
	}
}

void	ifdown(t_node **stack_a, t_node **stack_b, int *tab, int i)
{
	if (indexstack(*stack_b, tab[i]) >= (i + 1) / 2)
	{
		while ((*stack_b)->data != tab[i])
		{
			if (i > 1 && (*stack_b)->data == tab[i - 1])
				pa(stack_b, stack_a);
			else
				rrb(stack_b);
		}
	}
}
