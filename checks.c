/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omar <omar@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 23:41:25 by omar              #+#    #+#             */
/*   Updated: 2023/03/27 03:42:07 by omar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_numbers(char **numbers)
{
	int	i;
	int	j;
	int	number_count;

	i = 0;
	number_count = count_numbers(numbers);
	while (i < number_count)
	{
		j = 0;
		if (numbers[i][j] == '-' || numbers[i][j] == '+')
			j++;
		if (!ft_isdigit(numbers[i][j]))
			return (0);
		while (numbers[i][j])
		{
			if (!ft_isdigit(numbers[i][j]))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	is_max_min(char *str)
{
	int			i;
	long long	number;

	i = 0;
	number = 0;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i])
	{
		number = number * 10 + (str[i] - '0');
		if (str[0] == '-' && number * -1 < INT_MIN)
			return (1);
		else if (number > INT_MAX)
			return (1);
		i++;
	}
	if (str[0] == '-')
		number = number * -1;
	return (0);
}

int	check_max_min(char **numbers)
{
	int	i;
	int	number_count;

	i = 0;
	number_count = count_numbers(numbers);
	while (i < number_count)
	{
		if (is_max_min(numbers[i]))
			return (0);
		i++;
	}
	return (1);
}