SRC = $(wildcard $(SRC_DIR)*.c)
OBJ = $(SRC:.c=.o)
LIB_DIR = ../libs/
LIB = my
LDFLAGS = -L$(LIB_DIR) -l$(LIB) -I../include/

all: $(SRC)
	$(CC) -c $(SRC) $(LDFLAGS)
clean:
	rm -rf *.o

