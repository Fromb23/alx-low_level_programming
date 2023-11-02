#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * string_nconcat - Concatenate two strings, at most n bytes from s2
 * @s1: The first string
 * @s2: The second string
 * @n: The maximum number of bytes from s2 to concatenate
 *
 * Return: A pointer to the concatenated string
 **/

char *string_nconcat(char *s1, char *s2, unsigned int n)

{
	unsigned int i, j, s1_len, s2_len;
	char *string_concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	s1_len = strlen(s1);
	s2_len = strlen(s2);

	if (n >= s2_len)
		n = s2_len;

	string_concat = malloc(s1_len + n + 1);
	if (string_concat == NULL)
		return (NULL);

	for (i = 0; i < s1_len; i++)
	{
		string_concat[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		string_concat[i + j] = s2[j];
	}
	string_concat[s1_len + n] = '\0';

	return (string_concat);
}
