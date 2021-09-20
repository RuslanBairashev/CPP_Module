# Makefile for CCP00/ex01

NAME = phonebook
CC = clang++
CFLAGS = -Wall -Wextra -Werror -std=c++98
SOURCES = phonebook.cpp add.cpp search.cpp
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