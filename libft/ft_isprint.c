/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricda-si <ricda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 18:52:28 by ricda-si          #+#    #+#             */
/*   Updated: 2022/10/27 12:59:17 by ricda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int ch)
{
	if (ch >= 32 && ch < 127)
		return (1);
	return (0);
}

/*
int main()
{
	char ch1 = 'h';
	char ch2 = 'D';
	char ch3 = '1';
	char ch4 = '!';
	char ch5 = ' ';

	printf("ft function: %d\n", ft_isprint(ch1));
	printf("ft function: %d\n", ft_isprint(ch2));
	printf("ft function: %d\n", ft_isprint(ch3));
	printf("ft function: %d\n", ft_isprint(ch4));
	printf("ft function: %d\n", ft_isprint(ch5));

	printf("original function: %d\n", isprint(ch1));
	printf("original function: %d\n", isprint(ch2));
	printf("original function: %d\n", isprint(ch3));
	printf("original function: %d\n", isprint(ch4));
	printf("original function: %d\n", isprint(ch5));
}
*/