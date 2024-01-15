#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* _strcpy - Copies a string to a destination buffer
* @dest: The destination buffer
* @src: The source string to copy
*
* Return: A pointer to the destination buffer `dest`
**/

char *_strcpy(char *dest, char *src)

{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
