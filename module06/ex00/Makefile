NAME	= converting
SRC		= main.cpp converting.cpp
OBJ		= $(SRC:.cpp=.o)
HEADER 	= converting.hpp
RM		= rm -f
GCC		= g++
CFLAGS	= -Wall -Wextra -Werror 

all : $(NAME)

%.o : %.cpp	$(HEADER)
	$(GCC) -c $(CCFLAGS)  $< -o $@

$(NAME): $(OBJ)
	$(GCC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	@$(RM) $(OBJ)

fclean : clean
	@$(RM) $(NAME)

re : fclean all

