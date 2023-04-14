/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricda-si <ricda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 18:51:54 by ricda-si          #+#    #+#             */
/*   Updated: 2022/11/07 14:46:44 by ricda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
		return (0);
	while ((str1[i]) && (str1[i] == str2[i]))
	{
		if (i < (size - 1))
			i++;
		else
			return (0);
	}
	return (((((unsigned char *)str1)[i]) - (((unsigned char *)str2)[i])));
}

/*0
int main()
{
	char str1[] = "absdf";
	char str2[] = "acb";
	char str3[] = "afghij";
	char str4[] = "abcdeFGHIJ";

	printf("ft function: %d\n", ft_strncmp("test", "", 0));
	printf("ft function: %d\n", ft_strncmp(str1, str2, 7));
	printf("ft function: %d\n", ft_strncmp(str3, str4, 4));
	printf("ft function: %d\n\n", ft_strncmp(str3, str4, 8));

	printf("original function: %d\n", strncmp("test", "", 0));
	printf("original function: %d\n", strncmp(str1, str2, 7));
	printf("original function: %d\n", strncmp(str3, str4, 4));
	printf("original function: %d\n", strncmp(str3, str4, 8));
}
*/