#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* puts_half - Print the second half of a string, followed by a new line.
* @str: The input string.
**/

void puts_half(char *str)

{
	int length = strlen(str);
	int start_index;
	int i;

	start_index = (length % 2 == 0) ? length / 2 : (length - 1) / 2;

	for (i = start_index; i < length; i++)
	{
	putchar(str[i]);
	}

	putchar('\n');
}
