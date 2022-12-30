NAME	= data
SRC		= main.cpp
OBJ		= $(SRC:.cpp=.o)
HEADER 	= Data.hpp
RM		= rm -f
GCC		= g++
CFLAGS	= -Wall -Wextra -Werror -std=c++98

all : $(NAME)

%.o : %.cpp	$(HEADER)
	$(GCC) -c $(CFLAGS) $< -o $@

$(NAME): $(OBJ)
	$(GCC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	@$(RM) $(OBJ)

fclean : clean
	@$(RM) $(NAME)

re : fclean all

