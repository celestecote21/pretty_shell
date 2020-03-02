#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

#include "exec.h"

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
			my_printf("error exec");
			break;
		default: 
			wait(&status);
	}
	return status;
		
}
