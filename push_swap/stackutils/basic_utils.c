/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basic_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricda-si <ricda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 17:54:39 by ricda-si          #+#    #+#             */
/*   Updated: 2023/04/12 10:38:21 by ricda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	return_bigger(int a, int b)
{
	if (a > b)
		return (a);
	else
		return (b);
}

unsigned long long	return_difference(t_node *a, t_node *b)
{
	double	resultado;

	if (a->content >= b->content)
		resultado = a->content - b->content;
	else
		resultado = b->content - a->content;
	return (resultado);
}

int	half(t_node **stack, t_node *node)
{
	if (ft_lstsize(node) > ft_lstsize(*stack) / 2)
		return (0);
	else
		return (1);
}
