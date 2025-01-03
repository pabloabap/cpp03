# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pabad-ap <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/30 18:58:55 by pabad-ap          #+#    #+#              #
#    Updated: 2025/01/03 09:33:09 by pabad-ap         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= FragTrap
CPP		= c++
CPP_FLAGS	= -Wall -Wextra -Werror -std=c++98

HEADERS		= ClapTrap.hpp ScravTrap.hpp FragTrap.hpp
MAIN		= main.cpp
SRC		= $(MAIN) ClapTrap.cpp ScravTrap.cpp FragTrap.cpp
OBJ		= $(SRC:.cpp=.o)

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
