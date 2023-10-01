#include "main.h"

/**
 * more_numbers - Prints a pattern of numbers from 0 to 14.
 *               This function prints the numbers 0 to 14 repeatedly in a
 *               specific pattern, with two-digit numbers represented as
 *               pairs of characters.
 **/

void more_numbers(void)

{
	int j, i;
	int first_digit, last_digit;

	for (i = 0; i < 9; i++)
	{
		for (j = 0; j <= 9; j++)
			{
			_putchar('0' + j);
			}
				for (j = 10; j <= 14; j++)
				{
					first_digit = j / 10;
					last_digit = j % 10;
				_putchar('0' + first_digit);
				_putchar('0' + last_digit);
				}
		_putchar('\n');
	}
}
