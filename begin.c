/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   begin.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omar <omar@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 23:33:28 by omar              #+#    #+#             */
/*   Updated: 2023/03/27 19:49:41 by omar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*fill_stack(char **numbers)
{
	t_node	*stack;
	int		i;
	// int		number_count;

	stack = NULL;
	i = 0;
	// number_count = count_numbers(numbers);
	// printf("%i", number_count);
	// printf("%d\n", i);
	// printf("%s\n", numbers[0]);
	// printf("%s\n", numbers[1]);
	// printf("%s\n", numbers[2]);
	while (numbers[i])
	{
		ft_lstadd_back(&stack, ft_lst_new(ft_atoi(numbers[i])));
		i++;
		// printf("%s\n", numbers[i]);
		// printf("%d\n", i);
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
// 	while (stack_a)
// 	{
// 		printf("%d", stack_a->data);
// 		stack_a = stack_a->next;
// 	}
}