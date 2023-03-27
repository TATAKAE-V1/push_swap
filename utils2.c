/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omar <omar@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 17:09:48 by omar              #+#    #+#             */
/*   Updated: 2023/03/24 18:32:23 by omar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*ft_lst_new(int data)
{
	t_node	*new;
	
	new = malloc(sizeof(t_node));
	if (!new)
		return (NULL);
	new->data = data;
	new->next = NULL;
	return (new);
}

void	ft_lstadd_front(t_node **head, t_node *new)
{
	if (!head || !new)
		return ;
	new->next = *head;
	*head = new;
}

void	ft_lstadd_back(t_node **head, t_node *new)
{
	t_node	*last;
	
	if (!*head)
	{
		*head = new;
		return ;
	}
	last = *head;
	while (last->next)
		last = last->next;
	last->next = new;
}

int	ft_lstsize(t_node *head)
{
	int		i;

	i = 0;
	while (head)
	{
		i++;
		head = head->next;
	}
	return (i);
}
