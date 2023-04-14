/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigneditoa.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricda-si <ricda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 15:30:49 by ricda-si          #+#    #+#             */
/*   Updated: 2022/12/19 14:54:14 by ricda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_strlen(const char *ch)
{
	size_t	i;

	i = 0;
	while (ch[i])
		i++;
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	slen;
	char	*str;

	if (!s)
		return (0);
	slen = ft_strlen(s);
	if (start >= ft_strlen(s))
		str = malloc(1);
	else if (len > slen - start)
		str = malloc(sizeof(char) * slen - start + 1);
	else
		str = malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (start < slen && i < len)
	{
		str[i] = s[start];
		start++;
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_lenretu(unsigned long long n, char *str)
{
	if (n >= 10)
		str = ft_lenretu(n / 10, str);
	*str++ = (n % 10) + '0';
	*str = 0;
	return (str);
}

char	*ft_itoau(unsigned long long n)
{
	char	str[32];

	ft_lenretu(n, str);
	return (ft_substr(str, 0, (ft_strlen(str))));
}

int	ft_printnbru(unsigned int n)
{
	int		len;
	char	*num;

	len = 0;
	num = ft_itoau(n);
	len = ft_putstr(num);
	free(num);
	return (len);
}
