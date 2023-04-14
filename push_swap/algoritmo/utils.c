/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricda-si <ricda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 14:37:29 by ricda-si          #+#    #+#             */
/*   Updated: 2023/04/12 10:41:25 by ricda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	find_lowest2(int value, t_node **stack)
{
	long	nb;
	t_node	*current;

	current = *stack;
	nb = INT_MAX;
	while ((*stack))
	{
		if (nb > (*stack)->content && (*stack)->content > value)
			nb = (*stack)->content;
	}
	*stack = (*stack)->next;
	return (nb);
}

int	find_mid(t_node **stack)
{
	int	i;
	int	mid;
	int	valor;

	mid = ft_lstsize(*stack) / 2;
	i = 0;
	valor = find_lowest(stack);
	while (i < mid)
	{
		valor = find_lowest2(valor, stack);
		i++;
	}
	return (valor);
}

void	ft_push_top(t_node **stack1)
{
	int		i;
	t_node	*tmp;

	i = find_lowest(stack1);
	tmp = *stack1;
	while (tmp)
	{
		if (tmp->content == 1)
			break ;
		tmp = tmp->next;
	}
	if (half(stack1, tmp) == 0)
		while ((*stack1)->content != 1)
			rra(stack1);
	else if (half(stack1, tmp) == 1)
		while ((*stack1)->content != 1)
			rra(stack1);
}

int	find_lowest_index(t_node **stack)
{
	int		nb;
	int		i;
	t_node	*tmp;

	i = 0;
	tmp = *stack;
	nb = (*stack)->content;
	while ((*stack)->next)
	{
		if (nb > (*stack)->next->content)
			nb = (*stack)->next->content;
		*stack = (*stack)->next;
	}
	*stack = tmp;
	while ((*stack)->next)
	{
		if (nb > (*stack)->next->content)
			nb = (*stack)->next->content;
		*stack = (*stack)->next;
	}
	*stack = tmp;
	while ((*stack)->next)
	{
		if (nb > (*stack)->next->content)
			nb = (*stack)->next->content;
		*stack = (*stack)->next;
	}
	*stack = tmp;
	while ((*stack) && nb != (*stack)->content)
	{
		i++;
		*stack = (*stack)->next;
	}
	*stack = tmp;
	return (i);
}
