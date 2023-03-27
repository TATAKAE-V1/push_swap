/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omar <omar@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 04:14:56 by omar              #+#    #+#             */
/*   Updated: 2023/03/23 02:40:15 by omar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_strdup(char *s1)
{
	char	*cpy;
	size_t	len;
	size_t	i;

	len = ft_strlen(s1);
	cpy = malloc((len + 1));
	if (!cpy)
		return (0);
	i = 0;
	while (s1[i])
	{
		cpy[i] = s1[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}

int	count_numbers(char **numbers)
{
	int	i;
	
	i = 0;
	while (numbers[i])
		i++;
	return (i);
}

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

void	free_dptr(char **dptr)
{
	int	i;

	i = 0;
	if (dptr && *dptr)
	{
		while (dptr[i])
		{
			free(dptr[i]);
			i++;
		}
		free(dptr);
	}
}

int	ft_atoi(const char *str)
{
	int	i;
	int	res;
	int	sign;

	i = 0;
	res = 0;
	sign = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - 48;
		if (res * sign > INT_MAX)
			return (-1);
		else if (res * sign < INT_MIN)
			return (0);
		i++;
	}
	return (res * sign);
}
