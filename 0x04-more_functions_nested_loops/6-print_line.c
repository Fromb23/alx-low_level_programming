#include "main.h"

/**
 * print_line - Print a line of underscores
 * @n: The number of underscores to print
 **/

void print_line(int n)

{
	int i;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
		_putchar('_');
		}
	}
	_putchar('\n');
}
