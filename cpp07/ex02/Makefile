# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/23 11:53:53 by yrodrigu          #+#    #+#              #
#    Updated: 2025/09/23 11:59:14 by yrodrigu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
CFLAGS = -Wall -Wextra -Werror --std=c++98
CFILES = main.cpp \

OFILES = $(CFILES:.cpp=.o)

NAME = array

all: $(NAME)

$(NAME): $(OFILES)
	$(CC) $(CFLAGS) $(OFILES) -o $(NAME)

%.o: %.cpp Makefile
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
