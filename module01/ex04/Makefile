NAME 		= out
SRC_FILE	= main.cpp  ft_replace.cpp
OBJ_FILE	= $(SRC_FILE:.cpp=.o)
CC			= g++
CFLAGS		= -Wall -Wextra -Werror -std=c++98
HEADERS		= main.hpp
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
