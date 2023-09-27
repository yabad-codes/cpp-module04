SRC = $(wildcard *.cpp)

OBJ = $(SRC:.cpp=.o)

CC = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = a.out

$(NAME): $(OBJ)
	$(CC) $(CXXFLAGS) $(OBJ) -o $@

all: $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re all