# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ricda-si <ricda-si@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/13 14:16:08 by ricda-si          #+#    #+#              #
#    Updated: 2023/04/13 14:18:56 by ricda-si         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = pipex
HEADER = pipex.h 
CC = cc 
RM = rm -f 
CFLAGS = -Wall -Wextra -Werror 
OBJS = $(SRC:.c=.o)
SRC = libft_functions.c libft_functions2.c path.c pipex.c 

all: $(NAME)
$(NAME): $(OBJS)
clean:
		$(RM) $(OBJS)
fclean: clean
		$(RM) $(NAME)
re: fclean
		$(NAME)
