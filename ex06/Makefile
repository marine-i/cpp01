NAME = harlFilter

CXX = c++

CXXFLAGS = -Wall -Werror -Wextra -std=c++98

HEADERS = main.hpp

SRC = main.cpp Harl.cpp

OBJ = $(SRC:.cpp=.o)



all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re