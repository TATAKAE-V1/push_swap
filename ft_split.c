/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omar <omar@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 23:56:46 by omar              #+#    #+#             */
/*   Updated: 2023/03/13 00:23:36 by omar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_substr(char *s, unsigned int start, size_t len)
{
	char	*p;
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (ft_strlen(s) - start < len)
		len = ft_strlen(s) - start;
	p = malloc((len + 1) * sizeof(char));
	if (!p)
		return (0);
	while (i < len)
	{
		p[i] = s[start];
		start++;
		i++;
	}
	return (p);
}

static int	ft_wcount(char *s, char c)
{
	int	i;
	int	j;

	if (!s)
		return (0);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			j++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (j);
}

static char	**ft_free(char **p, size_t i)
{
	while (i >= 0)
	{
		free(p[i]);
		i--;
	}
	free(p);
	return (0);
}

char	**ft_split(char *s, char c)
{
	char	**p;
	int		i;
	int		a;
	int		b;

	p = malloc((ft_wcount(s, c) + 1) * (sizeof(char *)));
	if (!p)
		return (0);
	i = 0;
	a = 0;
	b = 0;
	while (i < ft_wcount(s, c))
	{
		while (s[a] == c)
			a++;
		b = a;
		while (s[b] && s[b] != c)
			b++;
		p[i] = ft_substr(s, a, (b - a));
		if (!p[i])
			return (ft_free(p, i - 1));
		a = b;
		i++;
	}
	return (p);
}
