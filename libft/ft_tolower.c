/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricda-si <ricda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 18:53:08 by ricda-si          #+#    #+#             */
/*   Updated: 2022/10/25 18:53:08 by ricda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int ch)
{
	if (ch > 64 && ch < 91)
		return (ch + 32);
	else
		return (ch);
}

/*
int main()
{
	char ch1 = '1';
	char ch2 = 'A';
	char ch3 = 'Z';
	char ch4 = 'y';
	char ch5 = 'q';
	char ch6 = '!';

	printf("ft function: %c\n", ft_tolower(ch1));
	printf("ft function: %c\n", ft_tolower(ch2));
	printf("ft function: %c\n", ft_tolower(ch3));
	printf("ft function: %c\n", ft_tolower(ch4));
	printf("ft function: %c\n", ft_tolower(ch5));
	printf("ft function: %c\n", ft_tolower(ch6));

	printf("original function: %c\n", tolower(ch1));
	printf("original function: %c\n", tolower(ch2));
	printf("original function: %c\n", tolower(ch3));
	printf("original function: %c\n", tolower(ch4));
	printf("original function: %c\n", tolower(ch5));
	printf("original function: %c\n", tolower(ch6));
}
*/