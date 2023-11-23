#include "main.h"
#include <stdio.h>

/**
 * print_binary - Prints the binary representation of an unsigned long integer.
 * @n: The unsigned long integer to be printed in binary.
 **/

void print_binary(unsigned long int n)

{
	unsigned long int result, copy = n;
	int len = 0, i;

	while (copy != 0)
	{
		copy = copy >> 1;
		len++;
	}

	for (i = len - 1; i >= 0; i--)
	{
		result = 1 << i;
	if ((result & n) != 0)
		_putchar('1');
	else
		_putchar('0');
	}
}
