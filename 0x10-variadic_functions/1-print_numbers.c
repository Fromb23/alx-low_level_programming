#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Print a variable number of numbers with a separator.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers to be printed.
 **/

void print_numbers(const char *separator, const unsigned int n, ...)

{
	va_list numbers;

	unsigned int i, output;

	va_start(numbers, n);

	for (i = 0; i < n; i++)
	{
		output = va_arg(numbers, unsigned int);
		printf("%u", output);

	if (separator != NULL && i != n - 1)
	{
		printf("%s", separator);
	}
	}
	va_end(numbers);
	printf("\n");
}
