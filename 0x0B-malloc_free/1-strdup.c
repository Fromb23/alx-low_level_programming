#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * _strdup - Duplicates a string.
 * @str: The string to duplicate.
 *
 * Return: If str is NULL or memory allocation fails, returns NULL.
 *         Otherwise, returns a pointer to the duplicated string.
 **/

char *_strdup(char *str)

{
	char *duplicate_string;
	int i, len_str;

	if (str == NULL)
	{
		return (NULL);
	}

	len_str = strlen(str);

	duplicate_string = malloc((len_str + 1) * sizeof(char));

	if (duplicate_string == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len_str; i++)
	{
		duplicate_string[i] = str[i];
	}
	duplicate_string[len_str] = '\0';

	return (duplicate_string);
}
