/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricda-si <ricda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 18:52:14 by ricda-si          #+#    #+#             */
/*   Updated: 2022/10/28 15:25:31 by ricda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int ch)
{
	if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
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

	printf("ft function: %d\n", ft_isalpha(ch1));
	printf("ft function: %d\n", ft_isalpha(ch2));
	printf("ft function: %d\n", ft_isalpha(ch3));
	printf("ft function: %d\n", ft_isalpha(ch4));

	printf("original function: %d\n", isalpha(ch1));
	printf("original function: %d\n", isalpha(ch2));
	printf("original function: %d\n", isalpha(ch3));
	printf("original function: %d\n", isalpha(ch4));
}
*/