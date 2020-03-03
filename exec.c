#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

#include "exec.h"



static char* built_in_command[] = {
	"cd",
	"help",
	"exit"
};


int (*built_in_cmd_func[]) (char**) = {
	&my_cd,
	&my_help,
	&my_exit,
};



int my_cd(char** args){
	return 1;
}

int my_help(char** args){
	return 1;
}

int my_exit(char** args){
	return 0;
}

int str_comp(char* str1, char* str2){
	int i;
	for(i = 0; str1[i] && str2[i]; i++){
		if(str1[i] != str2[i]){
			return 0;
		}
	}
	if(str1[i] && !str2[i])
		return 0;
	else if(!str1[i] && str2[i])
		return 0;
	else
		return 1;
}




int launcher(char** argv, char** env){
	
	for(int i = 0; built_in_command[i]; i++){
		if(str_comp(argv[0], built_in_command[i]) == 1){
			return (*built_in_cmd_func[i])(argv);
		}
	}

	return execute(argv);
}

int execute(char** argv){

	char* env[] ={"SHELL=the_best", NULL};
	pid_t child_pid;
	if(argv[0] == NULL){
		my_printf("please provide a programme name");
		exit(EXIT_FAILURE);
	}
	int status;

	switch(child_pid = fork()){
		case -1:
			my_printf("error on fork");
			exit(EXIT_FAILURE);
			break;
		case 0:
			// my_printf("child processe");
			
			execvp(argv[0], argv);
			my_printf("the commande is not found\n");
			break;
		default: 
			wait(&status);
	}
	return status;
		
}
