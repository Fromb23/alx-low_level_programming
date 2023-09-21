#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
* _strcat - Concatenates two strings.
* @dest: The destination string.
* @src: The source string to append to dest.
*
* Return: A pointer to the concatenated string, or NULL
*		if memory allocation fails.
**/

char *_strcat(char *dest, char *src)

{
	int i;
	int length1 = strlen(dest);
	int length2 = strlen(src);

	for (i = 0; i <= length2; i++)
	{
		dest[length1 + i] = src[i];
	}
	dest[length1 + length2] = '\0';
	return (dest);

}
