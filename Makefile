# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gmarsi <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/21 22:17:26 by gmarsi            #+#    #+#              #
#    Updated: 2020/03/12 21:09:01 by gmarsi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

CFLAGS = -Wall -Wextra -Werror

NAME = libftprintf.a

SRC =	ft_printf.c				\
		ft_check_flags.c		\
		ft_check_char.c			\
		ft_check_string.c		\
		ft_support_1.c			\
		ft_itoa.c				\
		ft_substr.c				\
		ft_strlen.c				\
		ft_check_lower_hexa.c	\

OBJ =	$(subst .c,.o,$(SRC))

all : $(NAME)

$(NAME): $(SRC)
	@$(CC) $(CFLAGS) -c $(SRC)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

clean:
	@/bin/rm -f $(OBJ)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re bonus
