CC = cc
CFLAGS = -Wall -Wextra -Werror
CFILES = ft_isalpha.c\
		 ft_isdigit.c\
		 ft_isalnum.c\
		 ft_isascii.c\
		 ft_isprint.c\
		 ft_strlen.c\
		 ft_memset.c\
		 ft_bzero.c\

OFILES = $(CFILES:.c=.o)

NAME = libft.a

all: $(NAME)

$(NAME): $(OFILES)
	ar -crs $(NAME) $(OFILES)

%.o: %.c libft.h
	$(CC) $(CFLAGS) -c $<

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
