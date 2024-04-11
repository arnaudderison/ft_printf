NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRC = 	src/main.c \
		src/pointer.c \
		src/putchar_fd.c \
		src/putstr_fd.c \
		src/putnbr_fd.c \
		src/strlen.c \
		src/u_putnbr_fd.c \
		src/strlcpy.c \
		src/puthex_fd.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
