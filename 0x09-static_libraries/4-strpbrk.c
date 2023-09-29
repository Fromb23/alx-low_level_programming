#include "main.h"
#include <stddef.h>

/**
* _strpbrk - searches a string for any of a set of bytes.
* @s: The string to be searched.
* @accept: The set of characters to search for.
*
* Return: A pointer to the byte in s that matches one of
*	the bytes in accept,
*         or NULL if no such byte is found.
**/

char *_strpbrk(char *s, char *accept)

{
	while (*s != '\0')
	{
	char *temp = accept;

		while (*temp != '\0')
		{
			if (*s == *temp)
			{
			return (s);
			}
		temp++;
		}
	s++;
	}

	return (NULL);
}
