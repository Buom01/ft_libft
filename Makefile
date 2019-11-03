EXEC=libft
SRC= $(wildcard *.c)
OBJ= $(SRC:.c=.o)

all: $(EXEC)

$(EXEC): $(OBJ)
	@$(CC) -o $@ $^ $(LDFLAGS)  // A recoder
	ar -rcs libft.a *.o

%.o: %.c
	@$(CC) -o $@ -c $< $(CFLAGS)  // A recoder

clean:
	@rm -rf *.o
