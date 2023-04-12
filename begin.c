/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   begin.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omar <omar@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 23:33:28 by omar              #+#    #+#             */
/*   Updated: 2023/03/29 16:00:34 by omar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*fill_stack(char **numbers)
{
	t_node	*stack;
	int		i;
	int		number_count;

	stack = NULL;
	i = 0;
	number_count = count_numbers(numbers);
	while (i < number_count)
	{
		ft_lstadd_back(&stack, ft_lst_new(ft_atoi(numbers[i])));
		i++;
	}
	return (stack);
}

void	begin(char **numbers, t_node **stack_a)
{
	if (!check_numbers(numbers) || !check_max_min(numbers))
	{
		free_dptr(numbers);
		exit_error();
	}
	*stack_a = fill_stack(numbers);
	if (!check_duplicates(*stack_a))
	{
		free_dptr(numbers);
		free_stack(*stack_a);
		exit_error();
	}
	if (check_is_sorted(*stack_a))
	{
		free_dptr(numbers);
		free_stack(*stack_a);
		exit(0);
	}
}