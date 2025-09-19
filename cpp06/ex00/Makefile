# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/26 15:17:07 by yrodrigu          #+#    #+#              #
#    Updated: 2025/09/19 09:31:47 by yrodrigu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
CFILES = main.cpp \
		 ScalarConverter.cpp \
		 CheckString.cpp \
		 CheckType.cpp \
		 ConversionString.cpp \
		 PseudoLiterals.cpp \

OFILES = $(CFILES:.cpp=.o)

NAME = convert

all: $(NAME)

$(NAME): $(OFILES)
		$(CC) $(CFLAGS) $(OFILES) -o $(NAME)

%.o: %.cpp Makefile ScalarConverter.hpp CheckString.hpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
