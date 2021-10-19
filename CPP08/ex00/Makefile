# Makefile for CCP08/ex00

NAME = easyfind
CC = clang++
CFLAGS = -Wall -Wextra -Werror -std=c++98
SOURCES = main.cpp 
HEADERS = easyfind.hpp
OBJECTS = $(SOURCES:.cpp=.obj)

all: $(NAME)

$(NAME): $(OBJECTS) $(HEADERS)
	$(CC) $(CFLAGS) $(OBJECTS) -o $(NAME)

%.obj: %.cpp $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	-rm -f $(OBJECTS)

fclean: clean
	-rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re