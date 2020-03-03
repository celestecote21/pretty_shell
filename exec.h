#ifndef EXEC_HEADER
#define EXEC_HEADER

#include "my_printf.h"

int execute(char** argv);
int my_cd(char** args);
int my_help(char** args);
int my_exit(char** args);
int str_comp(char* str1, char* str2);
int launcher(char** argv, char** env);

#endif
