# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hbadr <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/08 20:52:02 by hbadr             #+#    #+#              #
#    Updated: 2022/11/08 20:52:06 by hbadr            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Zombie
HEADERS = Zombie.hpp
SRC_FILE = main.cpp Zombie.cpp  newZombie.cpp  randomChump.cpp
CFLAGS = -Wall -Wextra -Werror -std=c++98
OBJ_FILE = $(SRC_FILE:.cpp=.o)

all : $(NAME)

%.o : %.cpp	$(HEADERS)
	c++ $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ_FILE) $(HEADERS)
		c++  $(CFLAGS) $(OBJ_FILE) -o $(NAME)

clean :
	rm -f $(OBJ_FILE)

fclean: clean
	rm -f $(NAME) 
re : fclean all
