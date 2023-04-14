/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricda-si <ricda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 22:19:13 by ricda-si          #+#    #+#             */
/*   Updated: 2023/04/12 11:09:30 by ricda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include <stdbool.h>
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct node_a
{
	struct node_a	*head;
	int				half;
	int				content;
	struct node_a	*next;
}	t_node;

void				ft_swap(t_node **stack);
void				ft_rotate(t_node **stack);
void				ft_reverse(t_node **stack);
void				ft_push(t_node **stack1, t_node **stack2);

void				ra(t_node **stack1);
void				rb(t_node **stack2);
void				rr(t_node **stack1, t_node **stack2);
void				pa(t_node **a, t_node **b);
void				pb(t_node **a, t_node **b);

void				sa(t_node **stack1);
void				sb(t_node **stack2);
void				ss(t_node **stack1, t_node **stack2);
void				rra(t_node **stack1);
void				rrb(t_node **stack2);

int					ft_lstsize(t_node *stack1);
void				ft_lstclear(t_node **lst);
long				ft_atol(const char *str);
int					find_lowest(t_node **stack);
int					ft_atoi(const char *str);

int					return_bigger(int a, int b);
unsigned long long	return_difference(t_node *a, t_node *b);
int					half(t_node **stack, t_node *node);

int					checker_dup(int argc, char **argv);
int					checker_num(int argc, char **argv);
int					checker_limits(int ac, char **av);
int					checker(int argc, char **argv);

t_node				*ft_lstlast(t_node *lst);
void				ft_lstadd_back(t_node **lst, t_node *new);
t_node				*ft_addstack(long value);
void				create_list(int ac, char **av, t_node **stack);
t_node				*create_stack(int argc, char **argv);

int					find_lowestforshort(t_node *stack);
static void			shortop1(t_node **stack);
static void			shortop2(t_node **stack);
void				short_sorter(t_node **stack);
void				sorter5(t_node **stack1, t_node **stack2);

static void			shortop3(t_node **stack1, t_node **stack2);
static void			shortop4(t_node **stack1, t_node **stack2);
void				push_lower(t_node **stack1, t_node **stack2);
void				push_lower2(t_node **stack1, t_node **stack2);

int					total_cost(t_node **stack1, t_node *node);
int					best_push(t_node *stack1, t_node *stack2, t_node *node1,
						t_node *node2);
t_node				*best_match(t_node *st_a, t_node *st_b);
t_node				*min_cost(t_node **stack_a, t_node **stack_b);

static void			upper_2(t_node **stack_a, t_node **stack_b);
static void			lowest_2(t_node **stack_a, t_node **stack_b);
static void			upper_1(t_node **stack_a, t_node **stack_b, char stack);
static void			lower_1(t_node **stack_a, t_node **stack_b, char stack);
void				send_to_a(t_node **stack_a, t_node **stack_b);

void				big_sorter(t_node **stack_a, t_node **stack_b);
void				main_sorter(int ac, t_node **stack_a, t_node **stack_b);
int					analise(t_node **stack);
void				push_to_b(t_node **stack1, t_node **stack2);

int					find_lowest2(int value, t_node **stack);
int					find_mid(t_node **stack);
void				ft_push_top(t_node **stack1);
int					find_lowest_index(t_node **stack);

#endif
