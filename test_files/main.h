#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include <stdio.h>
#include <unistd.h>

/**
 * struct print - Struct for handling format specifiers
 * @t: The format specifier
 * @f: Pointer to the corresponding prrinting function
 */

typedef struct print
{
	char *t;
	int (*f)(va_list);

} print_t;

#define NUM_HANDLERS 8
#define BUFFER_SIZE 1024

extern print_t handlers[NUM_HANDLERS];

/* function prototypes for format specifiers */

int _printf(const char *format, ...);

int print_s(va_list output);
int print_c(va_list output);
int print_d_i(va_list output);
int print_b(va_list output);
int print_u(va_list output);
int print_o(va_list output);
int print_x(va_list output);
int print_X(va_list output);

int _myPutchar(char c);

#endif
