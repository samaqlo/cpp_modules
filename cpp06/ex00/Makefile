SRC = tools.cpp main.cpp ScalarConverter.cpp
OBG = $(SRC:.cpp=.o)
NAME = ScalarConverter
FLAGS = -Wall -Wextra -Werror -std=c++98 -Wshadow

$(NAME) : $(OBG)
	c++ $(FLAGS) $(OBG) -o $(NAME)

all : $(NAME)

%.o : %.cpp ScalarConverter.hpp
	c++ $(FLAGS) -c $< -o $@

clean :
	rm -rf $(OBG)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re