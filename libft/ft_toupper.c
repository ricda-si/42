/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricda-si <ricda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 18:53:15 by ricda-si          #+#    #+#             */
/*   Updated: 2022/10/25 18:53:15 by ricda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int ch)
{
	if (ch > 96 && ch < 123)
		return (ch - 32);
	else
		return (ch);
}

/*
int main()
{
	char ch1 = '1';
	char ch2 = 'a';
	char ch3 = 'z';
	char ch4 = 'J';
	char ch5 = 'G';
	char ch6 = '!';

	printf("ft function: %c\n", ft_toupper(ch1));
	printf("ft function: %c\n", ft_toupper(ch2));
	printf("ft function: %c\n", ft_toupper(ch3));
	printf("ft function: %c\n", ft_toupper(ch4));
	printf("ft function: %c\n", ft_toupper(ch5));
	printf("ft function: %c\n", ft_toupper(ch6));

	printf("original function: %c\n", toupper(ch1));
	printf("original function: %c\n", toupper(ch2));
	printf("original function: %c\n", toupper(ch3));
	printf("original function: %c\n", toupper(ch4));
	printf("original function: %c\n", toupper(ch5));
	printf("original function: %c\n", toupper(ch6));
}
*/