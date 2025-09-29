# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/27 14:51:32 by yrodrigu          #+#    #+#              #
#    Updated: 2025/09/29 09:52:59 by yrodrigu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
CFILES = main.cpp \
		 BitcoinExchange.cpp \

OFILES = $(CFILES:.cpp=.o)

NAME = btc

all: $(NAME)

$(NAME): $(OFILES)
		$(CC) $(CFLAGS) $(OFILES) -o $(NAME)

%.o: %.cpp Makefile BitcoinExhange.hpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re all
