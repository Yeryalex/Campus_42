# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yrodrigu <yrodrigu@student.42barcelo>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/26 15:17:07 by yrodrigu          #+#    #+#              #
#    Updated: 2025/09/22 10:54:52 by yrodrigu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
CFILES = main.cpp \
		 Base.cpp \
		 identifyClass.cpp \

OFILES = $(CFILES:.cpp=.o)

NAME = class_type

all: $(NAME)

$(NAME): $(OFILES)
		$(CC) $(CFLAGS) $(OFILES) -o $(NAME)

%.o: %.cpp Makefile Base.hpp A.hpp B.hpp C.hpp identifyClass.hpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
