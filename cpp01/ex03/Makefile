# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/26 15:17:07 by yrodrigu          #+#    #+#              #
#    Updated: 2025/06/19 16:03:40 by yrodrigu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
CFILES = main.cpp \
		 Weapon.cpp \
		 HumanA.cpp \
		 HumanB.cpp \

OFILES = $(CFILES:.cpp=.o)

NAME = weapon

all: $(NAME)

$(NAME): $(OFILES)
		$(CC) $(CFLAGS) $(OFILES) -o $(NAME)

%.o: %.cpp Makefile Weapon.hpp HumanA.hpp HumanB.hpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
