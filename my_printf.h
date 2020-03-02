#ifndef MY_PRINTF_HEADER
#define MY_PRINTF_HEADER

#include <sys/types.h>

void my_printf(const char* format, ...);

void my_put_char(char ch);
void my_putnb_base(int nb, int base);
ssize_t my_getline(char** lineptr);
#endif
