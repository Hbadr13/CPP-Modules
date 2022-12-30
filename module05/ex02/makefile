NAME 		= Forms
SRC_FILE 	= main.cpp src/Bureaucrat.cpp  src/Form.cpp \
				 src/ShrubberyCreationForm.cpp src/RobotomyRequestForm.cpp \
				 	src/PresidentialPardonForm.cpp
OBJ_FILE	= $(SRC_FILE:.cpp=.o)
CC			= c++
FLAG		= -Wall -Wextra -Werror -std=c++98
HEADERS		= include/Bureaucrat.hpp include/Form.hpp \
				include/ShrubberyCreationForm.hpp include/RobotomyRequestForm.hpp \
					include/PresidentialPardonForm.hpp
RM			= rm -f

all 	: $(NAME)

%.o 	: %.cpp $(HEADERS)
		$(CC) $(FLAG) -c $< -o $@

$(NAME) : $(OBJ_FILE) $(HEADERS)
		$(CC) $(FLAG) $(OBJ_FILE)  -o $(NAME)

clean 	:
		$(RM) $(OBJ_FILE)

fclean : clean
		$(RM) $(NAME)

re : fclean all