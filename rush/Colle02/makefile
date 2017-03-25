# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: clbergon <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/03/25 03:39:35 by clbergon          #+#    #+#              #
#    Updated: 2017/03/25 04:52:20 by clbergon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = colle-2

SRCS = choose_result.c find_result.c ft_str.c main.c

COLLE = Colle00/ex00/rush00.c Colle00/ex00/rush01.c Colle00/ex00/rush02.c \
		Colle00/ex00/rush03.c Colle00/ex00/rush04.c

HDR = FT_COLLE.H

OBJ = choose_result.o find_result.o ft_str.o main.o

FG = gcc -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	@$(FG) -c $(SRCS)
	@ar rc lib.a $(OBJ)
	@ranlib lib.a
	@$(FG) -o $(NAME) lib.a -I $(HDR)
	@$(FG) -o colle-00 Colle00/ex00/rush00.c Colle00/ex00/ft_putchar.c \
		Colle00/ex00/main.c
	@$(FG) -o colle-01 Colle00/ex00/rush01.c Colle00/ex00/ft_putchar.c \
		Colle00/ex00/main.c
	@$(FG) -o colle-02 Colle00/ex00/rush02.c Colle00/ex00/ft_putchar.c \
		Colle00/ex00/main.c
	@$(FG) -o colle-03 Colle00/ex00/rush03.c Colle00/ex00/ft_putchar.c \
		Colle00/ex00/main.c
	@$(FG) -o colle-04 Colle00/ex00/rush04.c Colle00/ex00/ft_putchar.c \
		Colle00/ex00/main.c
clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all
