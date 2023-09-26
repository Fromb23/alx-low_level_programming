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
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		s++;
	}
	return (NULL);
}
