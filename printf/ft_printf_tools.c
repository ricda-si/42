/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_tools.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricda-si <ricda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 15:24:41 by ricda-si          #+#    #+#             */
/*   Updated: 2022/12/19 14:55:38 by ricda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_len_nbr(long int n)
{
	int	i;

	i = 1;
	if (n < 0)
	{
		n = -n;
		i++;
	}
	while (n / 10 > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	size_t	len;
	long	nbr;
	char	*result;

	nbr = n;
	len = ft_len_nbr(nbr);
	result = malloc(sizeof(char) * (len + 1));
	if (!result)
		return (0);
	if (nbr < 0)
	{
		nbr = -nbr;
		result[0] = '-';
	}
	result[len] = '\0';
	if (nbr == 0)
		result[0] = '0';
	while (nbr)
	{
		result[--len] = nbr % 10 + 48;
		nbr = nbr / 10;
	}
	return (result);
}

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

int	ft_printnbr(int n)
{
	int		len;
	char	*num;

	len = 0;
	num = ft_itoa(n);
	len = ft_putstr(num);
	free(num);
	return (len);
}

int	ft_putchar(int c)
{
	write(1, &c, 1);
	return (1);
}
