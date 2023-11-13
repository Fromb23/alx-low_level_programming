#include "main.h"

print_t handlers[NUM_HANDLERS] = {
	{"s", print_s},
	{"%", print_percent},
	{"c", print_c},
	{"d", print_d_i},
	{"i", print_d_i},
	{"b", print_b},
	{"u", print_u},
	{"x", print_x},
	{"X", print_X},
	{"o", print_o},
};
