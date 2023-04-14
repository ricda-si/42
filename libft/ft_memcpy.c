/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricda-si <ricda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 22:19:21 by ricda-si          #+#    #+#             */
/*   Updated: 2022/11/07 16:04:19 by ricda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *str1, const void *str2, size_t size)
{
	size_t	i;

	i = 0;
	if (!str1 && !str2)
		return (0);
	while (i < size)
	{
		((unsigned char *)str1)[i] = ((unsigned char *)str2)[i];
		i++;
	}
	return (str1);
}

/*
int	main()
{
	//char str1[50];
	//char str2[50];

	char str1[] = "abc";
	char str2[] = "";

	//strcpy(str2, '\0');
	//ft_memcpy(str1, str2, 5);
	memcpy(str1, str2, 5);

	//printf("ft function: %s\n", str1);
	printf("original function: %s\n", str1);
}
*/