#include "main.h"

/**
 * print_diagonal - prints a diagonal line of backslashes
 * @n: the number of backslashes to print
 **/

void print_diagonal(int n)

{
	int k;
	int space;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (k = 1; k <= n; k++)
		{
			for (space = 1; space < k; space++)
			{
				_putchar(' ');
			}
		_putchar('\\');

		_putchar('\n');
		}
	}
}
