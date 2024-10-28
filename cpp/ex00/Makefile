NAME = claptrap

SRC = ClapTrap.cpp  main.cpp

CXXFLAGS = c++ -Wall -Wextra -Werror -std=c++98

$(NAME):
	$(CXXFLAGS) $(SRC) -o $(NAME)

all: $(NAME)

clean:
	rm -f $(NAME)

fclean:
	rm -f $(NAME)
	
re: fclean all

./Phony: fclean re clean all
