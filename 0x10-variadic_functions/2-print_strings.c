#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Print strings with a specified separator.
 * @separator: The string to be printed between strings.
 * @n: The number of strings to print.
 * @...: Variable number of strings to print.
 **/

void print_strings(const char *separator, const unsigned int n, ...)

{
	va_list string;

	char *s2;
	unsigned int i;

	va_start(string, n);

	for (i = 0; i < n; i++)
	{
		s2 = va_arg(string, char *);
		if (s2 == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", s2);
		}
		if (i != n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(string);
}
