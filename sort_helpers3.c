/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_helpers3.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omar <omar@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 18:02:48 by omar              #+#    #+#             */
/*   Updated: 2023/04/16 18:06:06 by omar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	indexstack(t_node *stack_b, int content)
{
	int	i;

	i = 0;
	while (stack_b && stack_b->data != content)
	{
		stack_b = stack_b->next;
		i++;
	}
	return (i);
}
