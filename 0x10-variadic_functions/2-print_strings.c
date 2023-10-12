#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Print a variable number of strings with a separator.
 * @separator: The string to be printed between strings.
 * @n: The number of strings to be printed.
 **/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string;

	unsigned int i;
	char *output;

	va_start(string, n);

	for (i = 0; i < n; i++)
	{
		output = va_arg(string, char *);
	if (output == NULL)
	{
		printf("(nil)");
	}
	else
	{
		printf("%s", output);
	}

		if (separator != NULL && i != n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(string);
	printf("\n");

}
