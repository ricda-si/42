/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cost_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricda-si <ricda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 13:58:47 by ricda-si          #+#    #+#             */
/*   Updated: 2023/04/12 11:04:29 by ricda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	total_cost(t_node **stack1, t_node *node)
{
	if (ft_lstsize(node) > ft_lstsize(*stack1) / 2)
	{
		node->half = 0;
		return (ft_lstsize(*stack1) - ft_lstsize(node));
	}
	else
	{
		node->half = 1;
		return (ft_lstsize(node));
	}
}

int	best_push(t_node *stack1, t_node *stack2, t_node *node1, t_node *node2)
{
	int	firstcost;
	int	secondcost;

	firstcost = (total_cost(&stack1, node2));
	secondcost = (total_cost(&stack2, node1));
	if (node1->half == 0 && node2)
		return (return_bigger(firstcost, secondcost));
	if (node1->half == 1 && node2->half == 1)
		return (return_bigger(firstcost, secondcost));
	else
		return (firstcost + secondcost);
}

t_node	*best_match(t_node *st_a, t_node *st_b)
{
	t_node	*neigh;
	double	diff;

	neigh = st_a;
	diff = 99999999999;
	while (st_a)
	{
		if (return_difference(st_a, st_b) < diff \
			&& st_a->content > st_b->content)
		{
			diff = return_difference(st_a, st_b);
			neigh = st_a;
		}
		st_a = st_a->next;
	}
	return (neigh);
}

t_node	*min_cost(t_node **stack_a, t_node **stack_b)
{
	t_node	*bestmatch;
	t_node	*node;
	t_node	*current;
	int		mincost;
	int		totalcost;

	mincost = INT_MAX;
	node = *stack_b;
	current = *stack_b;
	while (current)
	{
		bestmatch = best_match(*stack_a, current);
		totalcost = best_push(*stack_a, *stack_b, current, bestmatch);
		if (total_cost(stack_a, node) < mincost)
		{
			mincost = totalcost;
			node = current;
		}
		current = current->next;
	}
	return (node);
}
