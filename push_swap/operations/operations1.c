/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricda-si <ricda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 22:32:41 by ricda-si          #+#    #+#             */
/*   Updated: 2023/04/12 10:46:29 by ricda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_swap(t_node **stack)
{
	t_node	*tmp;

	tmp = (*stack)->next;
	(*stack)->next = (*stack)->next->next;
	tmp->next = *stack;
	*stack = tmp;
}

void	ft_rotate(t_node **stack)
{
	t_node	*tmp1;
	t_node	*tmp2;

	tmp1 = *stack;
	*stack = (*stack)->next;
	tmp2 = *stack;
	while (tmp2->next)
		tmp2 = tmp2->next;
	tmp2->next = tmp1;
	tmp1->next = NULL;
}

void	ft_reverse(t_node **stack)
{
	t_node	*tmp;

	tmp = *stack;
	while ((*stack)->next)
		*stack = (*stack)->next;
	(*stack)->next = tmp;
	while (tmp->next != *stack)
		tmp = tmp->next;
	tmp->next = NULL;
}

void	ft_push(t_node **stack1, t_node **stack2)
{
	t_node	*tmp;

	if (*stack2 == NULL)
		return ;
	tmp = *stack2;
	*stack2 = (*stack2)->next;
	tmp->next = *stack1;
	*stack1 = tmp;
}

void	rrr(t_node **stack1, t_node **stack2)
{
	ft_reverse(stack1);
	ft_reverse(stack2);
	write(1, "rrr\n", 4);
}
