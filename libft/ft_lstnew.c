/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricda-si <ricda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 16:26:55 by ricda-si          #+#    #+#             */
/*   Updated: 2022/11/14 16:35:54 by ricda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*lcontent;

	lcontent = malloc(sizeof(t_list));
	if (!lcontent)
		return (0);
	lcontent->content = content;
	lcontent->next = NULL;
	return (lcontent);
}
