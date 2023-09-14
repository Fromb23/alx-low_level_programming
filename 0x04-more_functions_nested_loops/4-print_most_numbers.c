#include "main.h"

/**
 * print_most_numbers - Prints numbers from 0 to 9,
 * excluding 2 and 4, followed by a newline.
 **/

void print_most_numbers(void)

{
	int number;

	for (number = 0; number <= 9; number++)
	{
	if (number != 2 && number != 4)
		{
		_putchar('0' + number);
		}
	}
	_putchar('\n');
}
