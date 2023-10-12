#include <stdarg.h>

/**
 * sum_them_all - Calculate the sum of a variable number of integers.
 * @n: The number of integers to be summed.
 * Return: The sum of the integers.
 **/

int sum_them_all(const unsigned int n, ...)

{
	va_list sum;

	unsigned int i;
	int summation, value;

	if (n == 0)
	{
		return (0);
	}

	va_start(sum, n);

	summation = 0;

	for (i = 0; i < n; i++)
	{
	value = va_arg(sum, unsigned int);
		summation += value;
	}
	va_end(sum);

	return (summation);
}
