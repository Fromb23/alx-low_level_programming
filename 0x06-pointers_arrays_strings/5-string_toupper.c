#include "main.h"
#include <stdio.h>

/**
* string_toupper - Converts a string to uppercase.
* @upper: The input string.
*
* Return: A pointer to the modified string.
**/

char *string_toupper(char *upper)

{
	int i;

	for (i = 0; upper[i] != '\0'; i++)

	{
		if (upper[i] >= 'a' && upper[i] <= 'z')
		{
		upper[i] = upper[i] - ('a' - 'A');
		}
	}

	return (upper);
}

