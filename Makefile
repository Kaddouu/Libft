# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ilkaddou <ilkaddou@42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/08 12:41:24 by ilkaddou          #+#    #+#              #
#    Updated: 2024/11/08 13:31:29 by ilkaddou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#$(CC) $(SOURCES) $(LIB) && 

NAME = libft.a

CC = cc -Wall -Wextra -Werror

SOURCES = ft_isalpha.c \
		ft_isprint.c \
		ft_memset.c \
		ft_bzero.c \
		ft_isascii.c \
		ft_memcpy.c \
		ft_strlen.c \
		ft_isalnum.c \
		ft_isdigit.c \
		ft_memmove.c
LIB = libft.h
OBJECTS = $(SOURCES:.c=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re