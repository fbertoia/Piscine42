# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fbertoia <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/09/14 23:31:27 by fbertoia          #+#    #+#              #
#    Updated: 2017/09/14 23:31:30 by fbertoia         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op
CC = gcc
FLAGS = -Wall -Wextra -Werror
FILES_C = main.c operation.c
FILES_O = main.o operation.o

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) -o $@ $(FILES_C)

clean:
	rm -rf $(FILES_O)

fclean: clean
	rm -rf $(NAME)

re : fclean all