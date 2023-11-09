#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Print numbers with a specified separator.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers to print.
 * @...: Variable number of integers to print.
 **/

void print_numbers(const char *separator, const unsigned int n, ...)

{
	va_list number;

	unsigned int i;
	int num1;

	va_start(number, n);

	for (i = 0; i < n; i++)
	{
		num1 = va_arg(number, int);
		if (i != 0 && separator != NULL)
		{
			printf("%s", separator);
		}
		printf("%d", num1);
	}
	printf("\n");

	va_end(number);
}
