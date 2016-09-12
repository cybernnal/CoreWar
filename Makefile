# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tbillard <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/05/23 16:24:51 by tbillard          #+#    #+#              #
#    Updated: 2016/05/23 16:24:52 by tbillard         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = asm

SRC =	src/main.c \
	    src/error.c \
	    src/pmalloc.c \
	    src/pars.c \
	    src/convert.c \

INC = -I ./include/ -I ./libft/

LIB = libft/libft.a
LIB_PATH = libft/
#LIB = ft_printf/libftprintf.a
#LIB_PATH = ft_printf/

OBJ = $(SRC:.c=.o)

FLAG = -Wall -Wextra -Werror

CC = gcc

all: $(NAME)

$(NAME): $(OBJ)
	@make -C $(LIB_PATH)
	@$(CC) $(FLAG) -o $(NAME) $(OBJ) $(LIB) $(INC)
	@echo "asm created"

%.o: %.c
	@$(CC) $(FLAG) $(INC) -o $@ -c $<

clean:
	@rm -f $(OBJ)
	@make clean -C $(LIB_PATH)
	@echo "asm cleaned"

fclean: clean
	@rm -f $(NAME)
	@echo "asm deleted"

re: fclean all

.PHONY: clean fclean re all
