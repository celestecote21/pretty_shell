export CC = gcc
export CFLAGS = -Wall
SRC_DIR = src/
LIB_DIR = libs/
LIB = my
LDFLAGS = -L$(LIB_DIR) -l$(LIB) -Iinclude/
NAME = pretty_shell
SRC = $(wildcard $(SRC_DIR)*.c)
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ) 
	$(CC) -o $(NAME) $(OBJ) $(LDFLAGS)

$(OBJ): $(SRC)
	cd $(SRC_DIR) && $(MAKE)

clean:
	@(cd $(SRC_DIR) && $(MAKE) $@)	
