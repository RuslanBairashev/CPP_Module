# Makefile for CCP00/ex02

NAME = Account
CC = clang++
CFLAGS = #-Wall -Wextra -Werror -std=c++98
SOURCES = Account.cpp tests.cpp
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