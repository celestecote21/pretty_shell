#ifndef PARSER_HEADER
#define PARSER_HEADER

char** parser(char* line, int size_line);

typedef struct commande_line{
	char* programme_name;
	int argc;
	char** argv;
}commande_line_t;

#endif
