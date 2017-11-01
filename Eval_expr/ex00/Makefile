# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fbertoia <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/09/16 17:25:11 by fbertoia          #+#    #+#              #
#    Updated: 2017/09/16 18:35:03 by fbertoia         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = eval_expr
CC = cc
FLAGS = -Wall -Werror -Wextra
FILES_C = main.c ft_char_to_int.c ft_split_whitespaces.c calculus.c eval_expr.c
FILES_O = main.o ft_char_to_int.o ft_split_whitespaces.o calculus.o eval_expr.o

all: $(NAME)

$(NAME): $(FILES_O)
	$(CC) $(FLAGS) $(FILES_O) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $<

clean:
	rm -rf $(FILES_O)

fclean: clean
	rm -f $(NAME)

re: fclean all
