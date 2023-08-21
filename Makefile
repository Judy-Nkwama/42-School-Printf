# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: junkwama <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/21 17:28:24 by junkwama          #+#    #+#              #
#    Updated: 2023/08/21 17:59:36 by junkwama         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
SRCS = ft_printf.c ft_putchar_fd.c  ft_putnbr_fd.c  ft_putstr_fd.c
FLAGS = -Wall -Werror -Wextra

OBJS = $(SRCS:.c=.o)

all: $(NAME)

%.o: %.c
	cc $(FLAGS) -o @ -c $<

$(NAME): $(OBJS)
	ar crs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean:
	rm -f $(NAME)

re:
	fclean all
