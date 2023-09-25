#include "main.h"
#include <stddef.h>

/**
* _strchr - Locates the first occurrence of a character in a string.
* @s: The string to search.
* @c: The character to find.
*
* Return: A pointer to the first occurrence of the character c in s,
*         or NULL if the character is not found.
**/

char *_strchr(char *s, char c)

{
	while (*s != '\0')
	{
	if (*s == c)
	{
	return (s);
	}
	s++;
	}

	return (NULL);
}
