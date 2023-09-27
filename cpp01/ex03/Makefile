SRC = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp 
OBG = $(SRC:.cpp=.o)
NAME = Weapon
FLAGS = -Wall -Wextra -Werror -std=c++98

$(NAME) : $(OBG)
	c++ $(FLAGS) $(OBG) -o $(NAME)

all : $(NAME)

%.o : %.cpp HumanA.hpp HumanB.hpp
	c++ $(FLAGS) -c $< -o $@

clean :
	rm -rf $(OBG)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re