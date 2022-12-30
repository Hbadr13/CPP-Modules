NAME	= a.out

SRC_FILE	= main.cpp
OBJ_FILE	= $(SRC_FILE:.cpp=.o)
CC			= c++
CFLAGS 		= -Wall -Wextra -Werror -std=c++98
RM			= rm -f

all 	: $(NAME)

%.o 	: %.cpp
		$(CC) $(CFLAGS) -c $< -o $@

$(NAME) : $(OBJ_FILE) 
		$(CC) $(CFLAGS) $(OBJ_FILE)  -o $(NAME)

clean 	:
		$(RM) $(OBJ_FILE)

fclean : clean
		$(RM) $(NAME)

re : fclean all
