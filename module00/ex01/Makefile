NAME	:=	phonebook
SRC		:=	PhoneBook.cpp Contact.cpp main.cpp
HEADER	:=	PhoneBook.hpp

CC		:=	c++
CFLAGS	:=	-Wall -Wextra -Werror -std=c++98 #-fsanitize=address -g3
RM		:=	rm -rf
OBJDIR	:=	objs
OBJ		:=	$(addprefix $(OBJDIR)/, $(SRC:.cpp=.o))

.phony: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	$(CC) $(CFLAGS) $(OBJ) -o $@

$(OBJDIR)/%.o: %.cpp $(HEADER)
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJDIR) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all