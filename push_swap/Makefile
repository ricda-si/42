# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ricda-si <ricda-si@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/30 22:21:56 by ricda-si          #+#    #+#              #
#    Updated: 2023/04/12 11:24:08 by ricda-si         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = cc

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

SRC = operations/operations1.c operations/operations2.c operations/operations3.c\
		 under5sorter/push_lower.c under5sorter/short_sorter.c\
			stackutils/atol_atoi.c stackutils/basic_utils.c stackutils/checker.c stackutils/list_utils.c\
				push_swap.c algoritmo/main_algoritmo.c algoritmo/cost_utils.c algoritmo/push.c algoritmo/utils.c\

all: $(NAME)

$(NAME):
			$(CC) $(SRC) -o $(NAME)

clean:
			$(RM) $(NAME)

fclean:		clean

re:			fclean $(NAME)
