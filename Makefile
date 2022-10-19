# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jnuncio- <jnuncio-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/16 15:39:50 by jnuncio-          #+#    #+#              #
#    Updated: 2022/10/19 15:54:38 by jnuncio-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

BIN = libft.so

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c\
	ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c\
	ft_strchr.c ft_strrchr.c ft_strncmp.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar -rcs $(NAME) $(OBJ)

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRC)
	gcc -nostartfiles -shared -o $(BIN) $(OBJ)

clean:
	rm -f $(OBJ) $(BIN)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)
