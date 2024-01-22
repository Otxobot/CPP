NAME = zombie

SRC = main.cpp \
	newZombie.cpp \
	randomChump.cpp \
	Zombie.cpp 

OBJ = $(addsuffix .o, $(FILES))

CC = c++ -Wall -Werror -Wextra -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(SRC) -o $(NAME)

%.o: %.cpp
	@$(CC) -c $< -o $@

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re