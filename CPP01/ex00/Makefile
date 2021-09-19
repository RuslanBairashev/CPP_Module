# Makefile for CCP01/ex00

NAME = Zombie
CC = clang++
CFLAGS = -Wall -Wextra -Werror 
SOURCES = main.cpp newZombie.cpp randomChump.cpp
OBJECTS = $(SOURCES:.cpp=.obj)

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CC) -o $(NAME) $(OBJECTS)

%.obj: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	-rm -f $(OBJECTS)

fclean: clean
	-rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re