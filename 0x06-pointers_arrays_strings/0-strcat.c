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
	int total_length = strlen(dest) + strlen(src) + 1;

	char *concatenated = (char *)malloc(total_length * sizeof(char));

	if (concatenated != NULL)
	{
	strcpy(concatenated, dest);

	strcat(concatenated, src);
	}

	return (concatenated);
}
