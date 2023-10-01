#include "main.h"
#include <stdlib.h>

/**
 * print_last_digit - Print the last digit of an integer.
 * @i: The integer input.
 *
 * Return: The last digit.
 **/

int print_last_digit(int i)

{
	int last = i % 10;

	if (last < 0)
	{
		last = -last;
	}
	 _putchar('0' + last);
		return (last);
}
