# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mfortin <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/23 20:51:06 by mfortin           #+#    #+#              #
#    Updated: 2016/03/15 13:08:13 by mfortin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAG = -Wall -Wextra -Werror

NAME = fractol

SRC =	src/main.c \
		src/key_biding.c \
		src/zoom.c \
		src/utilities.c \
		src/init.c \
		src/mandelbrot.c \
		src/mandelbis.c \
		src/julia.c \
		src/burning_ship.c

OBJ = $(SRC:.c=.o)

MLX = -lmlx -framework OpenGL -framework AppKit

all: $(NAME)

$(NAME): $(OBJ)
		@make -k -C libft
		@gcc $(FLAG) -o $(NAME) $(OBJ) $(MLX) -Llibft -lft
		@echo "$(NAME) created"

%.o: %.c
		@gcc $(FLAG) -c $< -o $@

clean:
		@make clean -k -C libft
		@rm -f $(OBJ)
		@echo "$(NAME) *.o deleted"

fclean: clean
		@make fclean -k -C libft
		@rm -f $(NAME)
		@echo "$(NAME) deleted"

re: fclean all

.PHONY: all, clean, fclean, re
