/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricda-si <ricda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 21:55:54 by ricda-si          #+#    #+#             */
/*   Updated: 2022/10/27 16:12:17 by ricda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int value, size_t size)
{
	size_t	i;

	i = -1;
	while (++i < size)
		((unsigned char *)str)[i] = (unsigned char)value;
	return (str);
}

/*
int	main()
{
	char str[50];
	char value = '$';
	char *f1;
	char *f2;

	strcpy(str, "String to be changed.");
	f1 = ft_memset(str, value, 40);
	f2 = memset(str, value, 40);

	printf("ft funciton: %s\n", f1);
	printf("original function: %s\n", f2);
}
*/