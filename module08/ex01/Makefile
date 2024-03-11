# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abasante <abasante@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/07 16:37:57 by abasante          #+#    #+#              #
#    Updated: 2024/03/11 11:06:41 by abasante         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = span

FILES = main

SRC = $(addsuffix .cpp, $(FILES))

OBJ = $(addsuffix .o, $(FILES))

CFLAGS = c++ -Wall -Wextra -Werror --std=c++98 -fsanitize=address -g3

all : $(NAME)

$(NAME): $(OBJ)
		$(CFLAGS) $(OBJ) -o $(NAME)

%.o:%.cpp
	$(CFLAGS) -c $< -o $@

clean :
		rm -f $(OBJ)
fclean : clean
		rm -f $(NAME)
re : fclean all

.PHONY: all clean fclean re