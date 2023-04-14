/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricda-si <ricda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 16:42:39 by ricda-si          #+#    #+#             */
/*   Updated: 2022/11/14 16:42:32 by ricda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*str1;

	str1 = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!str1)
		return (NULL);
	i = -1;
	j = 0;
	while (s1[++i])
		str1[j++] = s1[i];
	i = -1;
	while (s2[++i])
		str1[j++] = s2[i];
	str1[j] = '\0';
	return (str1);
}

/*
int	main()
{
	printf("%s\n", ft_strjoin("", ""));
	printf("%s\n", ft_strjoin("abc", ""));
	printf("%s\n", ft_strjoin("", "abc"));
	printf("%s\n", ft_strjoin("abcd", "efghi"));
	printf("%s\n", strjoin("", ""));
	printf("%s\n", strjoin("abc", ""));
	printf("%s\n", strjoin("", "abc"));
	printf("%s\n", strjoin("abcd", "efghi"));
}
*/