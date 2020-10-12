CC = gcc
SRC = ./my_isneg.c \
      ./my_strdup.c \
      ./my_strstr.c \
      ./my_strcapitalize.c \
      ./my_show_word_array.c \
      ./my_strcat.c \
      ./my_showmem.c \
      ./my_strcmp.c \
      ./my_put_nbr.c \
      ./my_find_prime_sup.c \
      ./my_str_isalpha.c \
      ./my_strlowcase.c \
      ./my_str_to_word_array.c \
      ./my_strncpy.c \
      ./my_str_isprintable.c \
      ./my_is_prime.c \
      ./my_getnbr.c \
      ./my_strncmp.c \
      ./my_compute_power_rec.c \
      ./my_putnbr_base.c \
      ./my_str_isnum.c \
      ./my_putstr.c \
      ./my_strupcase.c \
      ./my_strcpy.c \
      ./convert_base.c \
      ./my_sort_int_array.c \
      ./my_revstr.c \
      ./my_strlen.c \
      ./my_swap.c \
      ./my_str_islower.c \
      ./my_compute_square_root.c \
      ./my_strncat.c \
      ./my_putchar.c \
      ./my_getnbr_base.c \
      ./my_puterr.c \
      ./my_str_isupper.c \
      ./my_showstr.c
OBJ = $(SRC:.c=.o)
CFLAGS += -Wall -Wextra -fno-builtin
IFLAGS = -I../include

all: $(OBJ)

.c.o:
	$(CC) -c $*.c $(CFLAGS) $(IFLAGS) -o $@
clean:
	rm -rf *.o

fclean:
	$(MAKE) clean
re: fclean all

.PHONY: all clean fclean re
