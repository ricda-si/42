/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricda-si <ricda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 18:51:42 by ricda-si          #+#    #+#             */
/*   Updated: 2022/10/25 18:51:42 by ricda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	size_t	i;
	size_t	signal;
	size_t	x;

	i = 0;
	signal = 1;
	x = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signal = -1;
		i++;
	}
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
		x = (x * 10) + str[i++] - '0';
	if (x > LLONG_MAX)
	{
		if (signal == 1)
			return (-1);
		return (0);
	}
	return (x * signal);
}

/*
int main()
{
	char *str = "+0000000000000000000000000000000000000000000000000000123";

	printf("ft function: %d\n", ft_atoi(str)); 
	printf("original function: %d\n", atoi(str));
}
*/