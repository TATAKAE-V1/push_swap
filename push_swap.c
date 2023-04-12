/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omar <omar@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 16:07:15 by omar              #+#    #+#             */
/*   Updated: 2023/04/06 15:42:40 by omar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	start_sorting(t_node **stack_a, t_node **stack_b)
{
	int	size;

	size = ft_lstsize(*stack_a);
	if (size == 2)
		sort_two(stack_a);
	else if (size == 3)
		sort_three(stack_a);
	else if (size == 4)
		sort_four(stack_a, stack_b);
	else if (size == 5)
		sort_five(stack_a, stack_b);
	else if (size <= 100)
		
}

static char	**split_argv(char **argv)
{
	int i;
	char *joined_args;
	char **split_args;
	
	joined_args = NULL;
	i = 1;
	while (argv[i])
	{
		joined_args = ft_strjoin(joined_args, argv[i]);
		joined_args = ft_strjoin(joined_args, " ");
		i++;
	}
	split_args = ft_split(joined_args, ' ');
	free(joined_args);
	return(split_args);
}

int	main(int argc, char *argv[])
{
	t_node	*stack_a;
	t_node	*stack_b;
	char	**numbers;
	int		i;
	t_node *tmp;
	
	i = 0;
	stack_a = NULL;
	stack_b = NULL;
	//numbers = NULL;
	if (argc < 2)
		exit(0);
	numbers = split_argv(argv);
	begin(numbers, &stack_a);
	tmp = stack_a;
	printf("%i\n", tmp->data);
	while (tmp->next)
	{
		tmp = tmp->next;
		printf("%i\n", tmp->data);
		i++;
	}
	start_sorting(&stack_a, &stack_b);
	while (stack_a)
	{
		printf("%i\n", stack_a->data);
		stack_a = stack_a->next;
	}
	return (0);
}
