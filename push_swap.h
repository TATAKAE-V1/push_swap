/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omar <omar@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 16:03:04 by omar              #+#    #+#             */
/*   Updated: 2023/04/01 17:55:39 by omar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <limits.h>
# include <stdlib.h>

typedef struct s_node
{
	int				data;
	struct s_node	*next;
}	t_node;

//split.c
char	**ft_split(char *s, char c);
char	*ft_substr(char *s, unsigned int start, size_t len);
//utils.c
size_t	ft_strlen(char *str);
void	ft_putstr_fd(char *str, int fd);
void	exit_error(void);
char	*join_str(char *joined_str, char *s1, char *s2);
char	*ft_strjoin(char *s1, char *s2);
//utils1.c
char	*ft_strdup(char *s1);
int		count_numbers(char **numbers);
int		ft_isdigit(int c);
void	free_dptr(char **dptr);
int		ft_atoi(const char *str);
//begin.c
void	begin(char **numbers, t_node **stack_a);
t_node	*fill_stack(char **numbers);
//checks.c
int	check_numbers(char **numbers);
int	check_max_min(char **numbers);
int	is_max_min(char *str);
int	check_duplicates(t_node *stack_a);
int	check_is_sorted(t_node *stack);
//utils2.c
t_node	*ft_lst_new(int data);
void	ft_lstadd_front(t_node **head, t_node *new);
void	ft_lstadd_back(t_node **head, t_node *new);
int	ft_lstsize(t_node *head);
void	free_stack(t_node *head);
//op.c
void	swap(t_node **stack);
void	push(t_node **stack_a, t_node **stack_b);
void	rot(t_node **stack);
void	rev_rot(t_node **stack);
void	sa(t_node **stack_a);
//op1.c
void	sb(t_node **stack_b);
void	ss(t_node **stack_a, t_node **stack_b);
void	pa(t_node **stack_a, t_node **stack_b);
void	pb(t_node **stack_b, t_node **stack_a);
void	ra(t_node **stack_a);
//op2.c
void	rb(t_node **stack_b);
void	rr(t_node **stack_a, t_node **stack_b);
void	rra(t_node **stack_a);
void	rrb(t_node **stack_b);
void	rrr(t_node **stack_a, t_node **stack_b);
//sort.c
void	sort_two(t_node **stack_a);
void	sort_three(t_node **stack_a);
void	sort_four(t_node **stack_a, t_node **stack_b);
void	sort_five(t_node **stack_a, t_node **stack_b);
//sort_helpers.c
int	get_max_index(t_node *stack);
int	get_min_index(t_node *stack);

#endif