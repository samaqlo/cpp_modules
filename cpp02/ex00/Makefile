SRC = Fixed.cpp main.cpp
OBG = $(SRC:.cpp=.o)
NAME = Fixed
FLAGS = -Wall -Wextra -Werror -std=c++98

$(NAME) : $(OBG)
	c++ $(FLAGS) $(OBG) -o $(NAME)

all : $(NAME)

%.o : %.cpp Fixed.hpp
	c++ $(FLAGS) -c $< -o $@

clean :
	rm -rf $(OBG)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re