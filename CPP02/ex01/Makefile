# Makefile for CCP02/ex01

NAME = fixed
CC = clang++
CFLAGS = -Wall -Wextra -Werror -std=c++98
SOURCES = main.cpp Fixed.cpp
HEADERS = Fixed.hpp
OBJECTS = $(SOURCES:.cpp=.obj)

all: $(NAME)

$(NAME): $(OBJECTS) $(HEADERS)
	$(CC) $(CFLAGS) $(OBJECTS) -o $(NAME)

%.obj: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	-rm -f $(OBJECTS)

fclean: clean
	-rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re