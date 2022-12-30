NAME	= a.out
CFALGS 	= -Wall -Wextra -Werror  -std=c++98 

all:$(NAME)

%.o:%.cpp array.hpp
	g++  $(CFALGS) -c main.cpp -o main.o
$(NAME): main.o
	g++   $(CFALGS) main.cpp -o $(NAME)
clean :
	rm -f main.o
fclean: clean
	rm -f a.out
re : fclean all