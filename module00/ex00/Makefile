NAME = megaphone
CFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -f
CC = c++

SRCS = megaphone.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o:%.cpp
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "compiling..."

clean:
	@$(RM) $(OBJS)
fclean: clean
	@$(RM) $(NAME)
re: fclean all