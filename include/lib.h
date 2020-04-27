#ifndef LIB_H
#define LIB_H

#include <stdlib.h>
#include <stdarg.h>

struct info_param
{
	int length;
	char* str;
	char* copy;
	char** word_array;
};

int my_putchar(const char c);
int my_swap(int* a, int* b);
int my_sort_int_array(int* array, int size);
int my_putnbr_base(int n, int base);
int my_putnbr_base_l(int n, int base);
char* my_charnbr_base(char* dest, int n, int base);
int my_pow(int n, int p);
int my_put_nbr(int n);
int my_strlen(const char* str);
int my_strcmp(const char* s1, const char* s2);
int my_strncmp(const char* s1, const char* s2, int n);
int my_putstr(const char* str);
char* my_strcpy(char* dest, const char* src);
char* my_strncpy(char* dest, const char* src, int n);
int my_getnbr(const char* str);
int my_getnbr_base(const char* str, const char* base);


int my_str_isprintable(const char* str);
int my_str_isupper(const char* str);
int my_str_islower(const char* str);
int my_str_isnum(const char* str);
int my_str_isalpha(const char* str);
char* my_strupcase(char* str);
char* my_strlowcase(char* str);
char* my_strstr(char* haystack, const char* needle);
char* my_strcat(char* dest, char const* src);
char* my_strncat(char* dest, char const* src, int n);

int my_showstr(const char* str);

int my_showmem(char const* str, int size);
int my_show_word_array(const char** tab);
char** my_str_to_word_array(const char* str);
char* convert_base(const char* nbr, const char* base_from, const char* base_to);
int get_color(unsigned int red, unsigned int green, unsigned int blue);
int swap_endian_color(int color);
char* my_strdup(const char* src);
int my_show_param_array(struct info_param const* par);
struct info_param* my_params_to_array(int ac, char** av);
char* concat_params(int argc, char** argv);

void my_printf(const char* format, ...);
void flags_manager(const char c, va_list li);


#endif
