#ifndef COLOR_HEADER
#define COLOR_HEADER

typedef enum color{
	RED, GREEN, YELLOW, BLUE, MAGENTA, CYAN, RESET
}color_e;


void change_color(color_e color, int bold);
void reset_color(void);



#endif

