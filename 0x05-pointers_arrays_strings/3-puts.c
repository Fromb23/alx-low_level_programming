#include "main.h"

/**
* _puts - Prints a string followed by a newline character.
* @str: The string to print.
**/

void _puts(char *str)

{
	while (*str != '\0')
	{
	_putchar(*str);
	str++;
	}

	_putchar('\n');
}
