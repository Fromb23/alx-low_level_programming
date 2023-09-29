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
	strcpy(dest, src);
	return (dest);
}

