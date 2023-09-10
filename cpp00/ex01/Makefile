SRC = contact.cpp phonebook.cpp
OBG = $(SRC:.cpp=.o)
NAME = phonebook
FLAGS = -Wall -Wextra -Werror

$(NAME) : $(OBG)
	g++ $(FLAGS) $(OBG) -o $(NAME)

all : $(NAME)

%.o : %.cpp phonebook.hpp
	g++ $(FLAGS) -c $< -o $@

clean :
	rm -rf $(OBG)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re