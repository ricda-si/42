/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricda-si <ricda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 16:39:25 by ricda-si          #+#    #+#             */
/*   Updated: 2022/11/09 12:17:29 by ricda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t size)
{
	size_t	n;

	n = ft_strlen(little);
	if (little[0] == '\0')
		return ((char *)big);
	if (size == 0)
		return (NULL);
	while (*big != '\0' && size-- >= n)
	{
		if (*big == *little && ft_memcmp(big, little, n) == 0)
			return ((char *)big);
		big++;
	}
	return (0);
}
