NAME		= easyfind
HEADERS		= easyfind.hpp
CC			= c++
SRC_FILE	= main.cpp
OBJ_FILE	= $(SRC_FILE:.cpp=.o)
CFALGS 		= -Wall -Wextra -Werror -std=c++98
all : $(NAME)

%.o : %.cpp	$(HEADERS)
	$(CC) $(CFALGS) -c $< -o $@

$(NAME): $(OBJ_FILE) $(HEADERS)
	$(CC) $(CFALGS) $(OBJ_FILE) -o $(NAME)

clean :
	rm -f $(NAME)

fclean: clean
	rm -f $(OBJ_FILE)

re : fclean all
