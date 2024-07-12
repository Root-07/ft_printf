# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ael-amin <ael-amin@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/25 19:52:41 by ael-amin          #+#    #+#              #
#    Updated: 2022/10/27 15:27:58 by ael-amin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = CC

CFLAGS = -Wall -Wextra -Werror

DEPS = ft_printf.h

SRC = ft_putchar.c ft_puthexa.c ft_putaddr.c ft_putnbr_unsigned.c ft_printf.c ft_putstr.c ft_putnbr.c

OBJ = ${SRC:.c=.o}

%.o: %.c
	$(CC) -c -o $@ $< $(CFLAGS)
		 
all: $(NAME)

$(NAME) : $(OBJ)
	ar rsc $(NAME) $(OBJ)
	
clean:
	rm -rf *.o
fclean:
	rm -rf $(NAME)
	rm -rf *.o

re: fclean all