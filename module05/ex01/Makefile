# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abasante <abasante@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/14 13:25:06 by abasante          #+#    #+#              #
#    Updated: 2024/02/14 13:29:29 by abasante         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = form

FILES = main Bureaucrat Form

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