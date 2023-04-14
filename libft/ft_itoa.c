/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricda-si <ricda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 15:00:14 by ricda-si          #+#    #+#             */
/*   Updated: 2022/11/14 15:09:04 by ricda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
