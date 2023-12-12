# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: achater <achater@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/01 22:38:01 by achater           #+#    #+#              #
#    Updated: 2023/12/03 21:39:24 by achater          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_printf.c fonction.c fonctions1.c
OBJS = $(SRCS:.c=.o)
NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

%.o: %.c ft_printf.h
	$(CC) $(CFLAGS) $< -c

$(NAME): $(OBJS)
	ar -rc $(NAME) $^

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re