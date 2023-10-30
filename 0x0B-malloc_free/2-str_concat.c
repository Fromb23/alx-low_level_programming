#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: If s1 or s2 is NULL, return NULL.
 *         Otherwise, return a pointer to the concatenated string.
 **/

char *str_concat(char *s1, char *s2)

{
	int i, j, len_s1, len_s2, total_len;
	char *concatenated;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	len_s1 = strlen(s1);
	len_s2 = strlen(s2);
	total_len = (len_s1 + len_s2);

	concatenated = malloc((total_len + 1) * sizeof(char));

	if (concatenated == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len_s1; i++)
	{
		concatenated[i + 0] = s1[i];
	}
	for (j = 0; j < len_s2; j++)
	{
		concatenated[i + j] = s2[j];
	}
	concatenated[i + j + 1] = '\0';

	return (concatenated);
}
