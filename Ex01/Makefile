NAME = PhoneBook
CC = c++
FLAGS = -Wall -Wextra -Werror  -fsanitize=address -g3
RM = rm -rf
SRC = main.cpp Contact.cpp PhoneBook.cpp utils.cpp
OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all
#-std=c++98