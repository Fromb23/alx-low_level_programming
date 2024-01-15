#include "main.h"
#include <unistd.h>

/**
* _strlen - Calculates the length of a string.
* @s: Pointer to the string.
*
* Return: Length of the string.
**/

int _strlen(char *s)

{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}
