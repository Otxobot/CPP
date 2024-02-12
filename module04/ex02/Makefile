# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abasante <abasante@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/06 16:49:34 by abasante          #+#    #+#              #
#    Updated: 2024/02/09 10:28:12 by abasante         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = brain

FILES = main Animal Dog Cat WrongCat WrongAnimal Brain

SRC = $(addsuffix .cpp, $(FILES))
OBJ = $(addsuffix .o, $(FILES))

CC = c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

%.o:%.cpp
	$(CC) -c $< -o $@

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re