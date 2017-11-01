# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fbertoia <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/09/14 12:03:41 by fbertoia          #+#    #+#              #
#    Updated: 2017/09/14 12:03:43 by fbertoia         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRC = srcs
INCLUDES = includes
SRC_NAME = $(SRC)/ft_putchar.c $(SRC)/ft_swap.c $(SRC)/ft_putstr.c \
$(SRC)/ft_strlen.c $(SRC)/ft_strcmp.c
OBJ_NAME = ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o

all: $(NAME)

$(NAME): $(OBJ_NAME)
	ar rc $@ $^
	ranlib $@

%.o: $(SRC)/%.c
	$(CC) $(CFLAGS) -I$(INCLUDES) -c $<

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
