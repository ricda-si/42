/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atol_atoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricda-si <ricda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 17:45:32 by ricda-si          #+#    #+#             */
/*   Updated: 2023/04/03 13:58:15 by ricda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_lstsize(t_node *stack1)
{
	int	i;

	i = 0;
	while (stack1 != NULL)
	{
		stack1 = stack1->next;
		i++;
	}
	return (i);
}

void	ft_lstclear(t_node **lst)
{
	t_node	*tmp;

	if (!lst || !*lst)
		return ;
	while (*lst)
	{
		tmp = (*lst)->next;
		free(*lst);
		*lst = tmp;
	}
	lst = NULL;
}

long	ft_atol(const char *str)
{
	long		result;
	int			sign;
	const char	*p;

	result = 0;
	sign = 1;
	p = str;
	if (*p == '-')
	{
		sign = -1;
		p++;
	}
	while (*p >= '0' && *p <= '9')
	{
		result = (result * 10) + (*p - '0');
		p++;
	}
	return (sign * result);
}

int	find_lowest(t_node **stack)
{
	int		i;
	int		j;
	int		nb;
	t_node	*tmp;

	i = find_lowest_index(stack);
	j = 0;
	nb = 0;
	tmp = *stack;
	while (tmp->next && j < i)
	{
		tmp = tmp->next;
		j++;
	}
	nb = tmp->content;
	return (nb);
}

int	ft_atoi(const char *str)
{
	int	res;
	int	sign;
	int	i;

	res = 0;
	sign = 1;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - 48;
		i++;
	}
	return (sign * res);
}
