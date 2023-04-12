/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_helpers.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omar <omar@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 06:45:02 by omar              #+#    #+#             */
/*   Updated: 2023/03/31 19:46:42 by omar             ###   ########.fr       */
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