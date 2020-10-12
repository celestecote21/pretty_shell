export CC = gcc
export CFLAGS = -Wall -g3

SRC_DIR = src/
LIB_DIR = lib/
LIB = my
LDFLAGS = -Iinclude/ -L$(LIB_DIR) -l$(LIB)
NAME = pretty_shell
SRC = $(wildcard $(SRC_DIR)*.c)
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(LDFLAGS)

%.o: %.c
	cd $(SRC_DIR) && $(MAKE)

clean:
	@(cd $(SRC_DIR) && $(MAKE) $@)
