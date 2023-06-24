/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricda-si <ricda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 16:45:20 by ricda-si          #+#    #+#             */
/*   Updated: 2023/06/24 15:18:04 by ricda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/so_long.h"

void	init_game(t_vars *game) {
	game->mlx = mlx_init();
	game->win = mlx_new_window(game->mlx, (map()->width_x * SCALE), 
								(map()->height_y * SCALE + 64), "SO_LONG");
	
}

int	main(void)
{
	static t_vars	game;

	init_game(&game);
	mlx_loop(game.mlx);
}
