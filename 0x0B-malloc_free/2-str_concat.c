#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* str_concat - Concatenates two strings.
* @s1: The first string.
* @s2: The second string to concatenate to s1.
*
* Return: A pointer to the newly allocated concatenated string,
*         or NULL if memory allocation fails or s2 is NULL.
**/

char *str_concat(char *s1, char *s2)

{

	int len1, len2, totalLen;
	char *concatenated;
	int i, j;

	if (s1 == NULL || s2 == NULL)
	{
	return (NULL);
	}

	len1 = strlen(s1);
	len2 = strlen(s2);
	totalLen = len1 + len2;

	concatenated = (char *)malloc(totalLen + 1 * sizeof(char));

	if (concatenated == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		concatenated[i] = s1[i];
	}
	for (j = 0; j < len2; j++)
	{
		concatenated[i + j] = s2[j];
	}
	concatenated[totalLen] = '\0';

	return (concatenated);
}
