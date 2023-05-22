NAME 		= PmergeMe
SRC_FILE 	= main.cpp PmergeMe.cpp

OBJ_FILE	= $(SRC_FILE:.cpp=.o)
CC			=  c++
CFLAG		=  -std=c++11#-Wall -Wextra -Werror
HEADERS		= PmergeMe.hpp
RM			= rm -f

all 	: $(NAME)

%.o 	: %.cpp $(HEADERS)
		$(CC) $(CFLAG) -c $< -o $@

$(NAME) : $(OBJ_FILE) $(HEADERS)
		$(CC) $(CFLAG) $(OBJ_FILE)  -o $(NAME)

clean 	:
		$(RM) $(OBJ_FILE)

fclean : clean
		$(RM) $(NAME)

re : fclean all