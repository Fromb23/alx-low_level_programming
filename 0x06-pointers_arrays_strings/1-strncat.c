#include "main.h"
#include <string.h>

/**
 * _strncat - Concatenates up to n characters from the src string
 * to the end of the dest string.
 * @dest: The destination string.
 * @src: The source string.
 * @n: The maximum number of characters to concatenate from src.
 *
 * Return: A pointer to the resulting string dest.
 **/

char *_strncat(char *dest, char *src, int n)

{
	int j;
	int len = strlen(dest);

	for (j = 0; j < n && src[j] !=  '\0'; j++)
	{
		dest[len + j] = src[j];
	}

	dest[len + j] = '\0';

	return (dest);
}
