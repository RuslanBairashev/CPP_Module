# Makefile for CCP05/ex02

NAME = bure
CC = clang++
CFLAGS = -Wall -Wextra -Werror -std=c++98
SOURCES = main.cpp Bureaucrat.cpp Form.cpp ShrubberyCreationForm.cpp \
RobotomyCreationForm.cpp PresidentalPardonForm.cpp
HEADERS = Bureaucrat.hpp Form.hpp ShrubberyCreationForm.hpp \
RobotomyCreationForm.hpp PresidentalPardonForm.hpp
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