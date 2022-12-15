# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mdattero <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/31 11:19:37 by mdattero          #+#    #+#              #
#    Updated: 2022/07/31 22:39:45 by sel-mouh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME = rush-02

SRC = srcs/*.c

HEADER = includes

ghgh:
	gcc -Wall -Wextra -Werror -I $(HEADER) $(SRC) -o $(NAME)

read:
	gcc $(HEADER) $(SRC)

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -I $(HEADER) $(SRC) -o $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all 
