/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   path.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricda-si <ricda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 15:28:59 by ricda-si          #+#    #+#             */
/*   Updated: 2023/04/13 15:53:06 by ricda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

char	*pathfinder(char **envp, char *command)
{
	int		i;
	char	**paths;
	char	*str;
	
	i = 0;
	while (ft_strncmp(envp[i], "PATH", 4))
		i++;
	paths = ft_split(envp[i] + 5, ':');
	i = 0;
	while (paths[i])
	{
		str = triple_strjoin(paths[i++], "/", command);
		if (!access(str, F_OK))
			break;
		free(str);
	}
	free(paths);
	if (access(str, F_OK))
		perror("No path found");
	return (str);
}
