/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricda-si <ricda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 13:57:26 by ricda-si          #+#    #+#             */
/*   Updated: 2022/10/28 15:20:38 by ricda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t size)
{
	unsigned int	i;

	i = 0;
	if (size == 0)
		return (0);
	while (((char *)str1)[i] == ((char *)str2)[i] && i < (size - 1))
		i++;
	return (((unsigned char *)str1)[i] - ((unsigned char *)str2)[i]);
}

/*
int main()
{
	char str1[] = "aaaaaaaaa";
	char str2[] = "aaaaaaaaa" ;
	int  size = 10;
	int f1 = ft_memcmp(str1, str2, size);
	int f2 = memcmp(str1, str2, size);

	printf("%d\n", f1);
	printf("%d\n", f2);
}
*/