NAME = fragTrap
SRC = ClapTrap.cpp  main.cpp ScavTrap.cpp FragTrap.cpp
CXX = c++ 
FLAGS = -Wall -Wextra -Werror -std=c++98
$(NAME):
	$(CXX) $(FLAGS) $(SRC) -o $(NAME)
all: $(NAME)
clean:
	rm -f $(NAME)
fclean:
	rm -f $(NAME)
re: fclean all
./Phony: fclean re clean all
