NAME = a.out

all:$(NAME)

%.o:%.cpp whatever.hpp
	g++ -Wall -Werror -Werror -c main.cpp -o main.o
$(NAME): main.o
	g++  -Wall -Wextra -Werror main.cpp -o $(NAME)
clean :
	rm -f main.o
fclean: clean
	rm -f a.out
re : fclean all
