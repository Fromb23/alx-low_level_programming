#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Concatenates two strings up to n characters from s2.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of characters to concatenate from s2.
 *
 * Return: A pointer to the concatenated string, or NULL on failure.
 **/

char *string_nconcat(char *s1, char *s2, unsigned int n)

{
	char *concatenated;
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	int total_length = len1 + len2;

	if (s1 == NULL)
	{
	s1 = "";
	}

	if (s2 == NULL)
	{
	s2 = "";
	}

	if (n > (unsigned int) len2)
		total_length += n - len2;

	concatenated = (char *)malloc(total_length * sizeof(char));

	if (concatenated == NULL)
	{
		return (NULL);
	}
	strcpy(concatenated, s1);
	strncat(concatenated, s2, n);

	return (concatenated);
}
