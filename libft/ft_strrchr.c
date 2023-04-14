/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricda-si <ricda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 16:15:19 by ricda-si          #+#    #+#             */
/*   Updated: 2022/11/14 15:50:25 by ricda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str1, int c)
{
	int		i;

	i = ft_strlen(str1);
	if (c == '\0')
		return ((char *)str1 + i);
	while (i >= 0)
	{
		if (str1[i] == (unsigned char)c)
			return ((char *)str1 + i);
		i--;
	}
	return (NULL);
}

// int	main()
// {
// 	char str[] = "This isz a string";
// 	char f1 = 's';
// 	char f2 = 'z';
// 	char f3 = ' ';
// 	char f4 = '\0';
// 	char f5 = 'g';

// 	printf("ft function: %s | original function: %s\n", 
// 	ft_strrchr(str, f1), strrchr(str, f1));
// 	printf("ft function: %s | original function: %s\n", 
// 	ft_strrchr(str, f2), strrchr(str, f2));
// 	printf("ft function: %s | original function: %s\n", 
// 	ft_strrchr(str, f3), strrchr(str, f3));
// 	printf("ft function: %s | original function: %s\n", 
// 	ft_strrchr(str, f4), strrchr(str, f4));
// 	printf("ft function: %s | original function: %s\n", 
// 	ft_strrchr(str, f5), strrchr(str, f5));

// }