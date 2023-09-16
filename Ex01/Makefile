NAME = PhoneBook
CC = c++
FLAGS = -Wall -Wextra -Werror
RM = rm -rf
SRC = main.cpp
OBJ = $(SRC :.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all