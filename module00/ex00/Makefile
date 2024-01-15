NAME = megaphone

CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf

SRC = megaphone.cpp
OBJ = megaphone.o

all: $(NAME)

$(NAME): $(OBJ)	
	@$(CC) $(OBJ) -o $(NAME)	

%.o: %.cpp
	@$(CC) -c $< -o $@

clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re