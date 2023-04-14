/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricda-si <ricda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 11:42:07 by ricda-si          #+#    #+#             */
/*   Updated: 2022/12/08 15:14:01 by ricda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	b[BUFFER_SIZE + 1];
	char		*str;

	str = NULL;
	if (fd < 0 || fd > FOPEN_MAX)
		return (NULL);
	if (!b[0])
		b[read(fd, b, BUFFER_SIZE)] = 0;
	while (b[0])
	{
		str = ft_strjoin(str, b);
		if (!str)
			return (NULL);
		if (organizer(b) == 1)
			break ;
		if (read(fd, b, 0) < 0)
		{
			free(str);
			return (NULL);
		}
		b[read(fd, b, BUFFER_SIZE)] = 0;
	}
	return (str);
}
