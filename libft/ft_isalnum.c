/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricda-si <ricda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 18:52:07 by ricda-si          #+#    #+#             */
/*   Updated: 2022/10/25 18:52:07 by ricda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int ch)
{
	if (ch > 64 && ch < 91)
		return (1);
	else if (ch > 96 && ch < 123)
		return (2);
	else if (ch > 47 && ch < 58)
		return (4);
	else
		return (0);
}

/*
int main()
{
	char ch1 = '6';
	char ch2 = 'g';
	char ch3 = 'J';
	char ch4 = '{';
	char ch5 = ' ';
	int  ch6 = 1;
	char ch7[] = "String";

	ft_strlen(ch7);

	printf("ft function: %d\n", ft_isalnum(ch1));
	printf("ft function: %d\n", ft_isalnum(ch2));
	printf("ft function: %d\n", ft_isalnum(ch3));
	printf("ft function: %d\n", ft_isalnum(ch4));
	printf("ft function: %d\n", ft_isalnum(ch5));
	printf("ft function: %d\n", ft_isalnum(ch6));

	printf("original function: %d\n", isalnum(ch1));
	printf("original function: %d\n", isalnum(ch2));
	printf("original function: %d\n", isalnum(ch3));
	printf("original function: %d\n", isalnum(ch4));
	printf("original function: %d\n", isalnum(ch5));
	printf("original function: %d\n", isalnum(ch6));
}
*/