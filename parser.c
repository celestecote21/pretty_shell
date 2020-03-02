#include <stdlib.h>
#include "parser.h"
#include "my_printf.h"


#define BUFFER_SIZE 64


char** parser(char* line, int size_line){
	int position = 0;
	int argc = 0;
	
	
	char** args = (char**)malloc(BUFFER_SIZE*sizeof(char*));
	if(!args)
	       exit(EXIT_FAILURE);
	
	// TODO: ajouter si ca va dans l'historique ou pas
	
	args[argc] = (char*)malloc(size_line);
	while(line[position] != ' ' && line[position]){
		*(args[0] + position) = line[position];
		position++;
	}
	// my_printf("programme name: %s \n", args[0]);
	argc++;

	
	while(line[position] == ' ' && line[position])
		position++;

	while(line[position]){
		args[argc] = (char*)malloc(size_line); // allocation pour l'arg
		if(!args[argc])
			exit(EXIT_FAILURE);
		int index = 0;

		// va au prochain arg si il y a plus d'un espace
		while(line[position] == ' ' && line[position])
			position++;
		// TODO: implementer quand il y a des quotes

		while(line[position] != ' ' && line[position]){
			*(args[argc] + index) = line[position];
			index++;
			position++;
		}
		argc++;
	}
	args[argc] = NULL; // to exec() the list of args must be NULL-terminated

// 	for(int i = 0; args[i]; i++){
		 // my_printf("arg %d: %s \n", i, args[i]);
	// }
	return args;
}
