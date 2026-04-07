NAME = ex01

CXX = c++

CXXFLAGS = -Wall -Werror -Wextra -std=c++98

HEADER = Zombie.hpp

SRC = main.cpp Zombie.cpp zombieHorde.cpp

OBJ = $(SRC:.cpp=.o)



all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp $(HEADER)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

valgrind: $(NAME)
	valgrind --leak-check=full --show-leak-kinds=all ./$(NAME)

.PHONY: all clean fclean re