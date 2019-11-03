CC=gcc
CFLAGS=-Wall -Wextra -Werror
EXEC=libft.a
SRC= $(wildcard ft_*.c)
OBJ= $(SRC:.c=.o)

all: $(EXEC)

$(EXEC): $(OBJ)
	ar -rcs $@ $(OBJ)

%.o: %.c
	$(CC) -o $@ -c $< $(CFLAGS)

clean:
	@rm -rf *.o
