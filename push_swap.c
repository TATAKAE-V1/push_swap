/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omar <omar@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 16:07:15 by omar              #+#    #+#             */
/*   Updated: 2023/03/27 20:54:33 by omar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static char	**split_argv(char **argv)
{
	int i;
	char *joined_args;
	char **split_args;
	
	joined_args = NULL;
	i = 1;
	while (argv[i])
	{
		printf("%s\n",argv[i]);
		joined_args = ft_strjoin(joined_args, argv[i]);
		joined_args = ft_strjoin(joined_args, " ");
		i++;
	}
	printf("%s\n", joined_args);
	split_args = ft_split(joined_args, ' ');
	// printf("%s\n", split_args[0]);
	// printf("%s\n", split_args[1]);
	// printf("%s\n", split_args[2]);
	free(joined_args);
	return(split_args);
}

int	main(int argc, char *argv[])
{
	t_node	*stack_a;
	//t_node	*stack_b;
	char	**numbers;

	stack_a = NULL;
	//stack_b = NULL;
	//numbers = NULL;
	if (argc < 2)
		exit(0);
	numbers = split_argv(argv);
	// printf("%s\n", numbers[0]);
	// printf("%s\n", numbers[1]);
	// printf("%s\n", numbers[2]);
	// printf("%s\n", numbers[2]);
	begin(numbers, &stack_a);
	// while (stack_a)
	// {
	// 	printf("%i\n", stack_a->data);
	// 	stack_a = stack_a->next;
	// }
	return (0);
}
