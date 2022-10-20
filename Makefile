# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jnuncio- <jnuncio-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/16 15:39:50 by jnuncio-          #+#    #+#              #
#    Updated: 2022/10/20 17:48:54 by jnuncio-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

BIN = libft.so

LIB_GCH = libft.h.gch

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c\
	ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c\
	ft_strchr.c ft_strrchr.c ft_strncmp.c ft_strnstr.c ft_atoi.c\
	ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar -rcs $(NAME) $(OBJ)

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRC)
	gcc -nostartfiles -shared -o $(BIN) $(OBJ)

clean:
	rm -f $(OBJ) $(BIN) $(LIB_GCH)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)
