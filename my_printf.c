#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include "my_printf.h"

#define BUFFER_SIZE 1024
void flag_manager(char flag, va_list li);

void my_printf(const char* format,...){
	va_list args_list;
	va_start(args_list, format);
	for(int i = 0; format[i]; i++){
		if(format[i] == '%'){
			i++;
			flag_manager(format[i], args_list);
			i++;
			my_put_char(format[i]);
		}else{
			my_put_char(format[i]);
		}
	}
	va_end(args_list);
}


void my_put_char(char ch){
	write(STDOUT_FILENO, &ch, 1);
}

void my_put_chars(const char* str){
	for(int i = 0; str[i]; i++){
		my_put_char(str[i]);
	}
}


void flag_manager(char flag, va_list li){
	switch(flag){
		case 's':
			my_put_chars(va_arg(li, char*));
			break;
		case 'c':
			my_put_char(va_arg(li, int));
			break;
		case 'd':
			my_putnb_base(va_arg(li, int), 10);
			break;
		case 'o':
			my_putnb_base(va_arg(li, int), 8);
			break;
		case 'x':
			my_putnb_base(va_arg(li, int), 16);
			break;
		case 'X':
			my_putnb_base(va_arg(li, int), 16);
			break;
		default:
			my_put_char(flag);
			break;
	}	
}

int my_pow(int nb, int expo){
	int temp = nb;
	for(int i = expo; i > 1; i--){
		temp = temp * nb;
	}
	return temp;
}

void my_putnb_base(int nb, int base){
	// calcule du nombre d'iteration a faire
	int i = 0;
	int temp = 0;
	while (temp < nb){
		temp = my_pow(base, i);
		i++;
	}
	int* tab_reminder = (int*)malloc(sizeof(int)*(i+1));
	int j = 0;
	for(j; j <= i ; j++){
		*(tab_reminder + j) = nb % base;
		nb = (int)(nb / base);
		if(nb <= 0){
			break;
		}
	}
		
	for(j; j >= 0; j--){
		temp = *(tab_reminder + j);
		if(temp  <= 9){
			my_put_char(temp + 48);
		}else{
			temp = temp - 10;
			my_put_char(temp + 65);
		}
	}
	free(tab_reminder);
}




ssize_t my_getline(char** lineptr){
	size_t sizeTotal = 0;
	*lineptr = (char*) malloc(BUFFER_SIZE);
	if(*lineptr == NULL){
		my_printf("error allocating memory");
	}
	char* new_lineptr;

	for(;;){
		char* buff = (char*)malloc(BUFFER_SIZE);
		if(buff == NULL){
			my_printf("error allocating memory");
		}
		int bRead = read(STDIN_FILENO, buff, BUFFER_SIZE);
		if( bRead == -1){
			my_printf("err read");
			return -1;
		}else if(bRead == 0){
			my_printf("end of file");
		}else{
			sizeTotal += bRead;
			memcpy(*lineptr, buff, bRead);
		}
		if ((new_lineptr = (char *)realloc(*lineptr, sizeTotal)) == NULL) {
                errno = ENOMEM;
                return -1;
            }
		*lineptr = new_lineptr;
		my_printf("got line: %s", *lineptr);
		// free(buff);
	}

}
