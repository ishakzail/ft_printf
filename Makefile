# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: izail <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/10 16:03:19 by izail             #+#    #+#              #
#    Updated: 2021/12/12 22:28:29 by izail            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
HEADER = ft_printf.h
CC = gcc
CFLAGS = -Wall -Werror -Wextra
AR = ar -rcs
RM = rm -f

MANDATORY = ft_printf.c ft_putchar.c ft_putstr.c ft_putnbr.c  ft_hex_upper.c  ft_hex_lower.c \

OBJS = $(MANDATORY:.c=.o)

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME) : $(OBJS) $(HEADER) 
			$(AR) $(NAME) $(OBJS)

all: $(NAME)

clean: 
	$(RM) $(OBJS) 

fclean: clean 
	 $(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re

