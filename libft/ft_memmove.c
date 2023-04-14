/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricda-si <ricda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 12:22:44 by ricda-si          #+#    #+#             */
/*   Updated: 2022/11/02 14:11:02 by ricda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t size)
{
	unsigned int	i;

	i = size;
	if (dest == src)
		return (dest);
	else if (dest > src)
	{
		while (i > 0)
		{
			i--;
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		}
	}
	else
	{
		i = 0;
		while (i < size)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return (dest);
}

/*
int main()
{
	char dest[50];
	char src[] = "Source to be moved.";
	int size = 5;

	ft_memmove(dest, src, size);
	memmove(dest, src, size);

	printf("ft function: %s\n", dest);
	printf("original function: %s\n", dest);
}
*/