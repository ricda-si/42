/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricda-si <ricda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 18:52:21 by ricda-si          #+#    #+#             */
/*   Updated: 2022/10/25 18:52:21 by ricda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int ch)
{
	if (ch > 47 && ch < 58)
		return (1);
	else
		return (0);
}

/*
int main()
{
	char ch1 = '1';
	char ch2 = 'a';
	char ch3 = 'A';
	char ch4 = '!';
	char ch5 = ' ';
	int  ch6 = 1;

	printf("ft function: %d\n", ft_isdigit(ch1));
	printf("ft function: %d\n", ft_isdigit(ch2));
	printf("ft function: %d\n", ft_isdigit(ch3));
	printf("ft function: %d\n", ft_isdigit(ch4));
	printf("ft function: %d\n", ft_isdigit(ch5));
	printf("ft function: %d\n", ft_isdigit(ch6));

	printf("original function: %d\n", isdigit(ch1));
	printf("original function: %d\n", isdigit(ch2));
	printf("original function: %d\n", isdigit(ch3));
	printf("original function: %d\n", isdigit(ch4));
	printf("original function: %d\n", isdigit(ch5));
	printf("original function: %d\n", isdigit(ch6));
}
*/