#include "main.h"
#include <stdio.h>

/**
 * print_times_table - Prints a multiplication table up to a given number.
 * @n: The number up to which to print the multiplication table.
 **/

void print_times_table(int n)

{
	int i, j, result;

	if (n < 0 || n > 15)
		return;
	for ( i = 0; i <= n; i++)
	{
		for (j  = 0; j <= n; j++)
		{
			result = i * j;
		if (j == 0)
		{
			_putchar('0');
		}
		else
		{
			if (result < 10)
			{
			printf(", %d", result);
			}
		}
		}
		printf("\n");
	}
}
