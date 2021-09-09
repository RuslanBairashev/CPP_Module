# Makefile for CCP00/ex01

NAME = phonebook
CC = clang++
CFLAGS = -Wall -Wextra -Werror 
# HEADER = ./include/philo.h
SOURCES = phonebook.cpp
OBJECTS = $(SOURCES:.cpp=.obj)

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CC) -o $(NAME) $(OBJECTS)

%.obj: %.cpp #$(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	-rm -f $(OBJECTS)

fclean: clean
	-rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re