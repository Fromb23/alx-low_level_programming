#include "main.h"
#include <stdio.h>
#include <stdlib.h>

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
	int i, j;
	int length1 = 0, length2 = 0;
	char *concatenated;

	if (s2 == NULL)
	{
	return (NULL);
	}

	while (s1 != NULL && s1[length1] != '\0')
	{
	length1++;
	}

	while (s2[length2] != '\0')
	{
	length2++;
	}

	concatenated = (char *)malloc((length1 + length2 + 1) * sizeof(char));

	if (concatenated == NULL)
	{
	return (NULL);
	}

	for (i = 0; i < length1; i++)
	{
		concatenated[i] = s1[i];
	}

	for (j = 0; j < length2; j++)
	{
		concatenated[i + j] = s2[j];
	}

	concatenated[length1 + length2] = '\0';

	return (concatenated);
}
