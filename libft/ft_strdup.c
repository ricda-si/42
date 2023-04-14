/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricda-si <ricda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 13:26:58 by ricda-si          #+#    #+#             */
/*   Updated: 2022/11/02 14:46:42 by ricda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	int		i;
	int		len;

	len = ft_strlen(s);
	str = malloc(sizeof(char) * len + 1);
	i = -1;
	if (!str)
		return (0);
	ft_strlcpy(str, s, sizeof(s));
	while (++i < len)
		str[i] = s[i];
	str[i] = '\0';
	return (str);
}
