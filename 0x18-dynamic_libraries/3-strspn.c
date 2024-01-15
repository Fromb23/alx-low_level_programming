#include "main.h"
#include <string.h>
#include <stddef.h>

/**
* _strspn - gets the length of a prefix substring consisting of characters
*            that are part of a specified set.
* @s: The string to be searched.
* @accept: The set of characters to match.
*
* Return: The number of bytes in the initial segment of s which consist
*         only of bytes from accept.
**/

unsigned int _strspn(char *s, char *accept)

{
	unsigned int length = 0;

	while (*s != '\0')
	{
	if (strchr(accept, *s) != NULL)
	{
	length++;
	}
	else
	{
	break;
	}
	s++;
	}

	return (length);
}
