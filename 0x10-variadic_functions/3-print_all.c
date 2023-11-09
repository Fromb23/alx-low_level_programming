#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Print values based on a format string.
 * @format: The format string containing format specifiers.
 * @...: Variable number of arguments based on the format string.
 */

void print_all(const char * const format, ...)

{
	va_list output;
	const char *ptr;
	int int_output;
	double float_output, temp;
	char char_output, *string_output;

	va_start(output, format);
	ptr = format;
	while (ptr != NULL && *ptr != '\0')
	{
		switch (*ptr)
		{
			case 'c':
				char_output = va_arg(output, int);
				printf("%c", char_output);
				break;
			case 'i':
				int_output = va_arg(output, int);
				printf("%i", int_output);
				break;
			case 'f':
				temp = va_arg(output, double);
				float_output = (float) temp;
				printf("%f", float_output);
				break;
			case 's':
				string_output = va_arg(output, char *);
				if (string_output == NULL)
					printf("(nil)");
				else
					printf("%s", string_output);
				break;
			default:
			break;
		}
		if (*(++ptr) && (*ptr == 'c' || *ptr == 'i' || *ptr == 'f' || *ptr == 's'))
			printf(", ");
	}
	printf("\n");
	va_end(output);
}
