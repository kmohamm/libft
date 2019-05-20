# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kmohamma <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/20 14:01:05 by kmohamma          #+#    #+#              #
#    Updated: 2019/05/20 14:47:59 by kmohamma         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a
SRCS= *.c
OBJECTS=*.o
HEADERS_FOLDER=includes

all: make_lib

make_lib:
	gcc -I$(HEADERS_FOLDER) -c $(SRCS)
	ar -rv $(NAME) $(OBJECTS)
	ranlib $(NAME)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
