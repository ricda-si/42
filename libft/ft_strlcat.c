/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricda-si <ricda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 15:51:30 by ricda-si          #+#    #+#             */
/*   Updated: 2022/11/02 15:15:20 by ricda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	ln;
	size_t	j;

	i = 0;
	j = ft_strlen(dst);
	ln = ft_strlen(dst) + ft_strlen(src);
	if (size == 0 || size <= ft_strlen(dst))
		return (ft_strlen(src) + size);
	if (size < 0)
		return (ln);
	while (src[i] && i < size - j - 1)
	{
		dst[j + i] = src[i];
		i++;
	}
	dst[j + i] = '\0';
	return (ln);
}
