SRC = File.cpp main.cpp
OBG = $(SRC:.cpp=.o)
NAME = File_replace
FLAGS = -Wall -Wextra -Werror -std=c++98

$(NAME) : $(OBG)
	c++ $(FLAGS) $(OBG) -o $(NAME)

all : $(NAME)

%.o : %.cpp File.hpp
	c++ $(FLAGS) -c $< -o $@

clean :
	rm -rf $(OBG)

fclean : clean
	rm -rf $(NAME) *.replace

re : fclean all

.PHONY : all clean fclean re