/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricda-si <ricda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 16:45:34 by ricda-si          #+#    #+#             */
/*   Updated: 2023/06/24 15:30:31 by ricda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

#include <mlx.h>
#include <unistd.h>
#include <stdlib.h>
#include <math.h>
#include <sys/time.h>

# define ESC	65307
# define S		115
# define D      100
# define W      119
# define A      97
# define SPACE	32
# define SCALE	64

# define COLLECT_BURN 2
# define PLAYER_BURN 3
# define WIN 4

typedef struct s_vars	t_vars;
typedef struct s_object	t_object;
typedef struct s_vars	t_vars;
typedef unsigned long	t_ulong;

typedef struct s_data {
	void	*img;
	char	*addr;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
	int		width;
	int		height;
	int		real_size[2];
	int		full_width;
	int		full_height;
}	t_data;

struct s_vars {
	void	*mlx;
	void	*win;
	int		key;
	t_data	img;
};

typedef struct map_struct {
	char		**map;
	t_object	***grid;
	int			game;
	int			width_x;
	int			height_y;
	int			exit[2];
	int			pstart[2];
} t_infomap;

t_infomap	*map(void);
void	init_game(t_vars *game);

#endif