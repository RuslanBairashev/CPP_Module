# Makefile for CCP

NAME = megaphone
CC = clang++
CFLAGS = -Wall -Wextra -Werror 
# HEADER = ./include/philo.h
SOURCES = megaphone.cpp
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