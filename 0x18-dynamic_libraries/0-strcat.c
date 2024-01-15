#include "main.h"
#include <string.h>

/**
 * _strcat - concatenates two strings
 * @dest: destination buffer
 * @src: source buffer
 *
 * Return: a pointer to the resulting string
 **/

char *_strcat(char *dest, char *src)

{
	int j;
	int len = strlen(dest);

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[len + j] = src[j];
	}
	dest[len + j] = '\0';

	return (dest);
}
