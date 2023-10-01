#include "main.h"

/**
 * print_line - Print a line of underscores
 * @n: The number of underscores to print
 * Return: Always 0 (SUCCESS)
 **/

void print_line(int n)

{
	int i;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
		_putchar('_');
		}
	}
	else if (n <= 0)
		{
		_putchar('\n');
		}
	_putchar('\n');
}
