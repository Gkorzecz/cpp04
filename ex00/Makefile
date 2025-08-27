	NAME    = Animalia
    CXX     = c++
    CXXFLAGS= -Wall -Wextra -Werror -std=c++98

    SRC = main.cpp Animal.cpp Cat.cpp Dog.cpp
    OBJ = $(SRC:.cpp=.o)

    all: $(NAME)

    $(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

    %.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

    clean:
	$(RM) $(OBJ)

    fclean: clean
	$(RM) $(NAME)

    re: fclean all

    .PHONY: all clean fclean re