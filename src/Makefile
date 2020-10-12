SRC = $(wildcard $(SRC_DIR)*.c)
OBJ = $(SRC:.c=.o)
LDFLAGS = -I../include/


all: $(OBJ)

%.o: %.c
	$(CC) -o $@ -c $< $(CFLAGS) $(LDFLAGS)


clean:
	rm -rf *.o

