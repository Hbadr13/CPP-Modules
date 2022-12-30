NAME 		= triangle
SRC_FILE 	= main.cpp Fixed.cpp Point.cpp 

OBJ_FILE	= $(SRC_FILE:.cpp=.o)
CC			= c++
CFLAG		= -Wall -Wextra -Werror -std=c++98
HEADERS		= Fixed.hpp Point.hpp
RM			= rm -f

all 	: $(NAME)

%.o 	: %.cpp $(HEADERS)
		$(CC) $(CFLAG) -c $< -o $@

$(NAME) : $(OBJ_FILE) $(HEADERS)
		$(CC) $(FLAG) $(OBJ_FILE)  -o $(NAME)

clean 	:
		$(RM) $(OBJ_FILE)

fclean : clean
		$(RM) $(NAME)

re : fclean all
