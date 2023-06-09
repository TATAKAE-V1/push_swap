/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op2.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omar <omar@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 00:12:24 by omar              #+#    #+#             */
/*   Updated: 2023/04/17 17:58:14 by omar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rb(t_node **stack_b)
{
	rot(stack_b);
	ft_putstr_fd("rb\n", 1);
}

void	rr(t_node **stack_a, t_node **stack_b)
{
	rot(stack_a);
	rot(stack_b);
	ft_putstr_fd("rr\n", 1);
}

void	rra(t_node **stack_a)
{
	rev_rot(stack_a);
	ft_putstr_fd("rra\n", 1);
}

void	rrb(t_node **stack_b)
{
	rev_rot(stack_b);
	ft_putstr_fd("rrb\n", 1);
}

void	rrr(t_node **stack_a, t_node **stack_b)
{
	rev_rot(stack_a);
	rev_rot(stack_b);
	ft_putstr_fd("rr\n", 1);
}
