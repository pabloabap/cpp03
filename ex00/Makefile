# CABECERA!!

NAME		= <name>
CPP		= c++
CPP_FLAGS	= -Wall -Wextra -Werror -std=c++98

SRC		= ...
OBJ		= $(SRC:.cpp=.o)
HEADERS		= ...

all: $(NAME)

$(NAME): $(OBJ)
	$(CPP) $(CPP_FLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp $(HEADERS)
	$(CPP) $(CPP_FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
