#include <stdlib.h>
#include "lib.h"
#include "color.h"

void change_color(color_e  color, int bold){
	//TODO: faire la fonction plus propre 
	char	code[7];
	
	code[0] = '\033';
	code[1] = '[';
	if(bold == 1)
		code[2] = '1';
	else
		code[2] = '0';
	code[3] = ';';
	code[4] = '3';
	code[5] = (char)((int)color + 49);
	code[6] = 'm';
	my_printf("%s", code);
	my_printf("");
}


void  reset_color(void){
	 my_printf("\033[0m");
}
