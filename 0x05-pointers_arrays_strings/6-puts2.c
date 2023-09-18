#include "main.h"

/**
* puts2 - Prints every other character of a string.
* @str: The input string.
**/

void puts2(char *str)

{
	int initial = 0;

	while (str[initial] != '\0')
	{
	if (initial % 2 == 0)
		{
		_putchar(str[initial]);
		}
		initial++;
	}
	_putchar('\n');
}
