# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abasante <abasante@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/18 13:50:48 by abasante          #+#    #+#              #
#    Updated: 2024/03/18 13:50:50 by abasante         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = stack

FILES = main

SRC = $(addsuffix .cpp, $(FILES))

OBJ = $(addsuffix .o, $(FILES))

CFLAGS = c++ -Wall -Wextra -Werror --std=c++98 #-fsanitize=address -g3

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