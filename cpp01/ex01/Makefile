SRC = Zombie.cpp main.cpp zombieHorde.cpp
OBG = $(SRC:.cpp=.o)
NAME = Zombie01
FLAGS = -Wall -Wextra -Werror -std=c++98

$(NAME) : $(OBG)
	c++ $(FLAGS) $(OBG) -o $(NAME)

all : $(NAME)

%.o : %.cpp Zombie.hpp
	c++ $(FLAGS) -c $< -o $@

clean :
	rm -rf $(OBG)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re