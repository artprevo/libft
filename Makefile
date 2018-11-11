# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: artprevo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/07 00:20:03 by artprevo          #+#    #+#              #
#    Updated: 2018/11/09 17:21:23 by artprevo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

HEADER = ./includes/
FLAG = -Wall -Wextra -Werror
OPTION = -c -I $(HEADER)
SRC = ./string/*.c ./conv/*.c
OBJ = ./*.o

all: $(NAME)

$(NAME) : 
		gcc $(FLAG) $(OPTION) $(SRC)
		ar rc $(NAME) $(OBJ)

clean:
		/bin/rm -f $(OBJ)

fclean: clean
		/bin/rm -f $(NAME)

re: fclean all
