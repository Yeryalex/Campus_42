# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/26 15:17:07 by yrodrigu          #+#    #+#              #
#    Updated: 2025/07/11 14:49:32 by yrodrigu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
CFILES = main.cpp\
		 Animal.cpp \
		 Dog.cpp \
		 Cat.cpp \
		 WrongCat.cpp \

OFILES = $(CFILES:.cpp=.o)

NAME = animal

all: $(NAME)

$(NAME): $(OFILES)
		$(CC) $(CFLAGS) $(OFILES) -o $(NAME)

%.o: %.cpp Makefile Animal.hpp Dog.hpp Cat.hpp WrongCat.hpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
