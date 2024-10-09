NAME = libft.a
CC = cc
CFLAGS = -Wall -Werror -Wextra

SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c

OBJ = $(SRC:.c=.o)
all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

$(OBJ): $(SRC)
	 $(CC) $(CFLAGS) -c $(SRC)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all