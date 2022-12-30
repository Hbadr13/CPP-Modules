# NAME 		= PhoneBook
# SRC_FILE 	= main.cpp PhoneBook.cpp Contact.cpp
# OBJ_FILE	= $(SRC_FILE:.cpp=.o)
# CC			= g++
# CFLAGS		= -Wall -Wextra -Werror -std=c++98
# HEADERS		= PhoneBook.hpp Contact.hpp
# RM			= rm -f


# %.o 	: %.cpp $(HEADERS)
#		$(CC) $(CFLAGS) -c $< -o $@
#main.o: main.cpp
#	@g++  -c  main.cpp  -o main.o 
#PhoneBook.o :  PhoneBook.cpp
#	@g++ -c  PhoneBook.cpp  -o PhoneBook.o 
#Contact.o :Contact.cpp
#	@g++ -c  Contact.cpp -o Contact.o  
# all 	: $(NAME)
# 
# $(NAME) : $(OBJ_FILE)
		# @$(CC) $(CFLAGS) $(OBJ_FILE)  -o $(NAME)
		# @echo "cdsv"
# 
# %.o : %cpp
		# @$(CC)  $(CFLAGS) -c $< -o $@
		# @echo "---> success!"
# 
# clean 	:
		# @$(RM) $(OBJ_FILE)
# 
# fclean : clean
		# @$(RM) $(NAME)
# 
# re : fclean all
# 
NAME = PhoneBook
CFLAGS = #-Wall -Wextra -Werror
RM = rm -f
CC = c++

SRCS = main.cpp PhoneBook.cpp  Contact.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o:%.cpp
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "compiling..."

clean:
	@$(RM) $(OBJS)
	@echo " cleaned"

fclean: clean
	@$(RM) $(NAME)
	@echo "executable removed"

re: fclean all