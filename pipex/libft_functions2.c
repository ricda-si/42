/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_functions2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricda-si <ricda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 15:21:19 by ricda-si          #+#    #+#             */
/*   Updated: 2023/04/13 15:51:14 by ricda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

char	*triple_strjoin(char *s1, char *s2, char *s3)
{
	char	*res;
	int		i;

	i = 0;
	if (!s1 || !s2 || !s3)
		return (NULL);
	res = malloc(ft_strlen(s1) + ft_strlen(s2) + ft_strlen(s3) + 1);
	while (*s1)
		res[i++] = *s1++;
	while (*s2)
		res[i++] = *s2++;
	while (*s3)
		res[i++] = *s3++;
	return (res);
}

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*substring;
	size_t	i;

	i = ft_strlen(s);
	if (!(s))
		return (NULL);
	substring = malloc(len + 1);
	substring[len] = '\0';
	if (!(substring))
		return (NULL);
	if (start >= i)
		len = 0;
	else if (len > (i - start))
		len = i - start;
	i = 0;
	while (i < len)
	{
		substring[i] = s[start + 1];
		i++;
	}
	return (substring);
}
	
