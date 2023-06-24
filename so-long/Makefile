# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ricda-si <ricda-si@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/16 17:21:58 by ricda-si          #+#    #+#              #
#    Updated: 2023/06/24 15:33:46 by ricda-si         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so_long
CC = gcc -Wall -Wextra -Werror
MINILIBX_PATH = mlx-linux/
MLXFLGAS = -L$(MINILIBX_PATH) -lmlx_Linux -L/usr/lib -lXext -lX11 -lm -lz
RM = /bin/rm -f
INCLUDES = -Iheaders/
MLX_INCLUDE = -Imlx_linux

SRC = src/main.c src/global.c
OBJ = $(SRC:.c=.o)

GREEN		:=	\033[1;32m
RED			:=	\033[1;31m
WHITE		:=	\033[1;37m
BOLD		:=	\033[1;1ms

all: $(NAME)

$(NAME): 		$(OBJS)
					@$(MAKE) -s -C $(MINILIBX_PATH)
					@$(CC) $(SRC) $(MLXFLAGS) -o $(@)

%.o: %.c
				@$(CC) $(INCLUDES) $(MLX_INCLUDE) -c $(SRC) -o $(@)

clean:
		@$(RM) $(OBJ)
		@echo "$(RED) [Deleting] object files deleted.$(BOLD)"

fclean: clean
#	$(MAKE) fclean -C ./libft
	@$(RM) $(NAME) $(OBJ)
	@echo "$(RED) [Deleting] .a deleted.$(BOLD)"

re: fclean all

.PHONY: all clean fclean re