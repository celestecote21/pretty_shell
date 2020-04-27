#include "unistd.h"	
#include <stdlib.h>
#include "shell.h"
#include "parser.h"
#include "lib.h"
#include "exec.h"
#include "color.h"

#define BUFFER_SIZE 1024




int my_shell(){
	char* line;
	char** ligne_par;
	char* env[] = {"SHELL=pretty_shell", NULL};
	int status;
	for(;;){
		change_color(GREEN, 1);
		my_printf(">");
		reset_color();
		int size_line = 0;
		line = read_line(&size_line);
		if(size_line < 1){
			continue;
		}
		ligne_par = parser(line, size_line);
		status = launcher(ligne_par, env);
		free(line);
		free(ligne_par);
     	}
	return 1;
}


char my_getchar(void){
	char* buff = (char*)malloc(2);
	int bRead = read(STDIN_FILENO, buff, 1);
	if(bRead < 0){
		exit(EXIT_FAILURE);
	}else if(bRead == 1){
		return (char)buff[0];
	}else{
		exit(EXIT_FAILURE);
	}
}


char* read_line(int* size_line){
	char ch;
	char* buff = malloc(BUFFER_SIZE);
	int current_size = BUFFER_SIZE;
	int position;	
	if(!buff){
		exit(EXIT_FAILURE);
	}
	for(position = 0;;position++){
		ch = my_getchar();
		if(ch == '\n'){
			break;
		}
		buff[position] = ch;
		if(position >= current_size){
			char* new_buff = (char*)realloc(buff, position + 10);
			if(!new_buff){
				exit(EXIT_FAILURE);
			}
			buff = new_buff;
			current_size = position + 10;
		}
	}
	*size_line = position;
	return buff;
}
