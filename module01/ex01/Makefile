NAME	= Zombie

SRC_FILE	= main.cpp Zombie.cpp zombieHorde.cpp
OBJ_FILE	= $(SRC_FILE:.cpp=.o)
CC			= c++
CFLAGS 		= -Wall -Wextra -Werror -std=c++98
HEADERS		= Zombie.hpp
RM			= rm -f

all 	: $(NAME)

%.o 	: %.cpp $(HEADERS)
		$(CC) $(CFLAGS) -c $< -o $@

$(NAME) : $(OBJ_FILE) $(HEADERS)
		$(CC) $(CFLAGS) $(OBJ_FILE)  -o $(NAME)

clean 	:
		$(RM) $(OBJ_FILE)

fclean : clean
		$(RM) $(NAME)

re : fclean all
