CC=gcc
CFLAGS=-Wall -Wextra -Werror
TARGET=libft.a
SRC= $(wildcard ft_*.c)
OBJ= $(SRC:.c=.o)

all: $(TARGET)

$(TARGET): $(OBJ)
	ar -rcs $@ $(OBJ)

%.o: %.c
	$(CC) -o $@ -c $< $(CFLAGS)

clean:
	rm -rf *.o
	rm -rf $(TARGET)
