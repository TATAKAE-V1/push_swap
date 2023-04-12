/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omar <omar@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 03:01:05 by omar              #+#    #+#             */
/*   Updated: 2023/03/27 21:21:58 by omar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_putstr_fd(char *str, int fd)
{
	while (*str)
	{
		write(fd, str, 1);
		str++;
	}
}

void	exit_error(void)
{
	ft_putstr_fd("ERROR\n", 2);
	exit(1);
}

char	*join_str(char *joined_str, char *s1, char *s2)
{
	size_t	i;
	size_t	j;
	size_t	s1_len;
	size_t	s2_len;

	i = 0;
	j = 0;
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	while (i < s1_len)
	{
		joined_str[i] = s1[i];
		i++;
	}
	while (j < s2_len)
	{
		joined_str[i] = s2[j];
		i++;
		j++;
	}
	joined_str[i] = '\0';
	return (joined_str);
}

char	*ft_strjoin(char *s1, char *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	char	*joined_str;

	if (!s2)
		return (0);
	if (!s1)
		return (ft_strdup(s2));
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	joined_str = malloc((s1_len + s2_len + 1) * sizeof(char));
	if (!joined_str)
	{
		free(s1);
		return (0);
	}
	joined_str = join_str(joined_str, s1, s2);
	free(s1);
	return (joined_str);
}
