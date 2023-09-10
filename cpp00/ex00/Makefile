SRC = megaphone.cpp
OBG = $(SRC:.cpp=.o)
NAME = megaphone
FLAGS = -Wall -Wextra -Werror -std=c++98

$(NAME) : $(OBG)
	g++ $(FLAGS) $(OBG) -o $(NAME)

all : $(NAME)

%.o : %.cpp
	g++ $(FLAGS) -c $< -o $@

clean :
	rm -rf $(OBG)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re
