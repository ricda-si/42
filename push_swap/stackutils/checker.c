/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricda-si <ricda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 18:24:43 by ricda-si          #+#    #+#             */
/*   Updated: 2023/04/12 10:38:59 by ricda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	checker_dup(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc - 1)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_atoi(argv[i]) == ft_atoi(argv[j]))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	checker_num(int argc, char **argv)
{
	int	i;
	int	h;

	i = 1;
	while (i < argc)
	{
		h = 0;
		while (argv[i][h])
		{
			if (h == 0 && (argv[i][h] == '-' || argv[i][h] == '+'))
				h++;
			if ((argv[i][h] >= '0' && argv[i][h] <= '9'))
				h++;
			else
				return (0);
		}
		i++;
	}
	return (1);
}

int	checker_limits(int ac, char **av)
{
	int	i;

	i = 1;
	while (i < ac)
	{
		if (ft_atol(av[i]) == 3737373737)
			return (0);
		i++;
	}
	return (1);
}

int	checker(int argc, char **argv)
{
	if (argc == 1)
		return (0);
	if (argc != 1)
		if (checker_num(argc, argv))
			if (checker_limits(argc, argv))
				if (checker_dup(argc, argv))
					return (1);
	write(2, "Error\n", 6);
	return (0);
}
