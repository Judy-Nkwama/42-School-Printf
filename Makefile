# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: junkwama <junkwama@student.42roma.it>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/21 17:28:24 by junkwama          #+#    #+#              #
#    Updated: 2023/08/27 11:17:51 by junkwama         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
SRCS = ft_putptr.c ft_putchar.c ft_putnbr.c ft_putstr.c ft_put_unsigned_nbr.c main.c ft_printf.c
FLAGS = -Wall -Werror -Wextra

OBJS = $(SRCS:.c=.o)

all: $(NAME)

%.o: %.c
	cc $(FLAGS) -o $@ -c $<

$(NAME): $(OBJS)
	ar crs $(NAME) $(OBJS)
	cc $(FLAGS) -o program $(NAME)
	./program

clean:
	rm -f $(OBJS) program

fclean:
	rm -f $(NAME)

re:
	fclean all
