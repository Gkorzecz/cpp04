NAME      := Animalia
CXX       := c++
CXXFLAGS  := -Wall -Wextra -Werror -std=c++98

SRC       := main.cpp Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp
OBJ_DIR   := obj
OBJ       := $(addprefix $(OBJ_DIR)/,$(SRC:.cpp=.o))

all: $(NAME)

$(OBJ_DIR):
	@mkdir -p $@

$(OBJ_DIR)/%.o: %.cpp | $(OBJ_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $^ -o $@

clean:
	$(RM) -r $(OBJ_DIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re