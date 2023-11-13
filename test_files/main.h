#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include <stdio.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

/**
 * struct HandlerArgs - Struct for handler function arguments
 * @output: va_list containing the arguments
 * @buffer_ptr: Pointer to the buffer for formatted output
 * @buffer_start: Pointer to the start of the buffer
 */
typedef struct
{
    va_list output;
    char *buffer_ptr;
    char *buffer_start;
} HandlerArgs;

/**
 * struct print - Struct for handling format specifiers
 * @t: The format specifier
 * @f: Pointer to the corresponding printing function
 */
typedef struct print
{
    char *t;
    int (*f)(HandlerArgs);
} print_t;

#define NUM_HANDLERS 8

extern print_t handlers[NUM_HANDLERS];

int handle_specifier(char specifier, va_list args, char *buffer, size_t *buf_len);

/* Function prototypes for format specifiers */

int _printf(const char *format, ...);

int print_s(HandlerArgs args);
int print_c(HandlerArgs args);
int print_d_i(HandlerArgs args);
int print_b(HandlerArgs args);
int print_u(HandlerArgs args);
int print_o(HandlerArgs args);
int print_x(HandlerArgs args);
int print_X(HandlerArgs args);

int _myPutchar(char c);

#endif
