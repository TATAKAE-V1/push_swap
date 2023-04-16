/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_helpers.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omar <omar@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 06:45:02 by omar              #+#    #+#             */
/*   Updated: 2023/04/16 18:29:01 by omar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_max_index(t_node *stack)
{
	int			max;
	int			i;
	int			j;
	t_node		*tmp;

	tmp = stack;
	max = tmp->data;
	i = 0;
	j = 0;
	while (tmp)
	{
		if (tmp->data > max)
		{
			max = tmp->data;
			j = i;
		}
		i++;
		tmp = tmp->next;
	}
	return (j);
}

int	get_min_index(t_node *stack)
{
	int			min;
	int			i;
	int			j;
	t_node		*tmp;

	tmp = stack;
	min = tmp->data;
	i = 0;
	j = 0;
	while (tmp)
	{
		if (tmp->data < min)
		{
			min = tmp->data;
			j = i;
		}
		i++;
		tmp = tmp->next;
	}
	return (j);
}

int	*sort_tab(t_node *stack_a, int size)
{
	int	*tab;
	int	i;
	int	j;
	int	tmp;

	i = 0;
	j = 0;
	tab = malloc(size * sizeof(int));
	fill_tab(&tab, stack_a);
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				tmp = tab[i];
				tab[i] = tab[j];
				tab[j] = tmp;
			}
			j++;
		}
		i++;
	}
	return (tab);
}

void	fill_tab(int **tab, t_node *stack_a)
{
	int	i;

	i = 0;
	while (stack_a)
	{
		(*tab)[i] = stack_a->data;
		stack_a = stack_a->next;
		i++;
	}
}

void	fillthis(t_node **stack_a, int *n, int *middle, int *offset)
{
	*middle = ft_lstsize(*stack_a) / 2;
	*n = check_n(stack_a);
	*offset = ft_lstsize(*stack_a) / *n;
}
