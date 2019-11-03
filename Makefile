CC=gcc
CFLAGS=-Wall -Wextra -Werror
NAME=libft.a
SRC= $(wildcard ft_*.c)
OBJ= $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar -rcs $@ $(OBJ)

%.o: %.c
	$(CC) -o $@ -c $< $(CFLAGS)

clean:
	rm -rf *.o

fclean:	clean	
		rm -rf $(NAME)

re: fclean all
