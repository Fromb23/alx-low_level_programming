#include <stdbool.h>
#include "main.h"

/**
 * wildcmp - compares two strings with wildcard character '*'
 * @s1: the first string to compare
 * @s2: the second string with wildcards
 *
 * Return: true if s1 matches s2, false otherwise
 **/

int wildcmp(char *s1, char *s2)

{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (true);
	}
	if (*s2 == '*')
	{
		if (*s1 != '\0')
		{
			return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
		}
		return (wildcmp(s1, s2 + 1));
	}
	if (*s1 != *s2)
	{
		return (false);
	}
	else
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
}
