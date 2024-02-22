# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abasante <abasante@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/21 16:45:13 by abasante          #+#    #+#              #
#    Updated: 2024/02/21 16:45:14 by abasante         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = convert

SRCS = main.cpp ScalarConverter.cpp

OBJS = $(SRCS:.cpp=.o)

CFLAGS = c++ -Wall -Wextra -Werror --std=c++98 -fsanitize=address -g3

${NAME}: $(OBJS)
		@$(CFLAGS) -o $(NAME) $(OBJS)

all : ${NAME}

clean :
		@rm -f ${OBJS}
fclean : clean
		@rm -f ${NAME}
re : fclean all

.PHONY: all clean fclean re