/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricda-si <ricda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 17:38:50 by ricda-si          #+#    #+#             */
/*   Updated: 2023/04/12 10:47:10 by ricda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ra(t_node **stack1)
{
	ft_rotate(stack1);
	write(1, "ra\n", 3);
}

void	rb(t_node **stack2)
{
	ft_rotate(stack2);
	write(1, "rb\n", 3);
}

void	rr(t_node **stack1, t_node **stack2)
{
	ft_rotate(stack1);
	ft_rotate(stack2);
	write(1, "rr\n", 3);
}

void	pa(t_node **a, t_node **b)
{
	ft_push(a, b);
	write(1, "pa\n", 3);
}

void	pb(t_node **a, t_node **b)
{
	ft_push(b, a);
	write(1, "pb\n", 3);
}
