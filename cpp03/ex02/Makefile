SRC = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp
OBG = $(SRC:.cpp=.o)
NAME = FragTrap
FLAGS = -Wall -Wextra -Werror -std=c++98

$(NAME) : $(OBG)
	c++ $(FLAGS) $(OBG) -o $(NAME)

all : $(NAME)

%.o : %.cpp ClapTrap.hpp ScavTrap.hpp FragTrap.hpp
	c++ $(FLAGS) -c $< -o $@

clean :
	rm -rf $(OBG)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re