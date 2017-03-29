# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: clbergon <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/03/29 03:56:01 by clbergon          #+#    #+#              #
#    Updated: 2017/03/29 04:14:48 by clbergon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_atoi.c ft_putchar.c ft_putnbr.c ft_putstr.c ft_strcmp.c ft_strlen.c \
	   ft_strrev.c ft_swap.c

OBJ = ft_atoi.c ft_putchar.c ft_putnbr.c ft_putstr.c ft_strcmp.c ft_strlen.c \
	  ft_strrev.c ft_swap.c

FG = gcc -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	@$(FG) -c $(SRCS)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)
	@$(FG) -o $(NAME)


clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: clean all
