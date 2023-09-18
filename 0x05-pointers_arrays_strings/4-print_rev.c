#include "main.h"
#include <string.h>

/**
* print_rev - Prints a string in reverse order, followed by a newline character.
* @s: The string to print in reverse.
**/

void print_rev(char *s)

{
	int length = strlen(s);
	int rev_length;

	for (rev_length = length - 1; rev_length >= 0; rev_length--)
	{
	_putchar(s[rev_length]);
	}

	_putchar('\n');
}
