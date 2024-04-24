#include "main.h"

/**
 * more_numbers - Prints a pattern of numbers from 0 to 14.
 *               This function prints the numbers 0 to 14 repeatedly in a
 *               specific pattern, with two-digit numbers represented as
 *               pairs of characters.
 **/

void more_numbers(void)

{
	int i, j;

	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
			{
				_putchar((j / 10) + '0');
			}
			_putchar((j % 10) + '0');
		}
		_putchar('\n');
	}
}
