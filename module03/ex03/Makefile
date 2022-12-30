NAME 		= DiamondTrap
SRC_FILE 	= main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp
OBJ_FILE	= $(SRC_FILE:.cpp=.o)
CC			= c++
FLAG		= #-Wall -Wextra -Werror -std=c++98
HEADERS		= ClapTrap.hpp ScavTrap.hpp FragTrap.hpp DiamondTrap.hpp
RM			= rm -f

all 	: $(NAME)

%.o 	: %.cpp $(HEADERS)
		$(CC) $(FLAG) -c $< -o $@

$(NAME) : $(OBJ_FILE) $(HEADERS)
		$(CC) $(FLAG) $(OBJ_FILE)  -o $(NAME)

clean 	:
		$(RM) $(OBJ_FILE)

fclean : clean
		$(RM) $(NAME)

re : fclean all
