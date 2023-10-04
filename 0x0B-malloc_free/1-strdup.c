#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * _strdup - Duplicate a string.
 * @str: The string to duplicate.
 *
 * Return: A pointer to the newly allocated duplicated string,
 *         or NULL if str is NULL or if memory allocation fails.
 **/

char *_strdup(char *str)

{

	unsigned int length = strlen(str);
	char *new_string;

	if (str == 0)
	{
	return (NULL);
	}

	new_string = (char *)malloc((length + 1) * sizeof(char));

	if (new_string == NULL)
	{
		return (NULL);
	}
	else
	{
	strcpy(new_string, str);
	}

	return (new_string);
}
