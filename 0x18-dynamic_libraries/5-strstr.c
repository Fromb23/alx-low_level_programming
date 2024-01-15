#include "main.h"
#include <string.h>

/**
* _strstr - locates a substring in a string.
* @haystack: The string to search within.
* @needle: The substring to search for.
*
* Return: A pointer to the first occurrence of the substring in the string,
*         or NULL if the substring is not found.
**/

char *_strstr(char *haystack, char *needle)

{
	char *locate_substring = strstr(haystack, needle);

	if (locate_substring == NULL)
	{
	return (NULL);
	}
	return (locate_substring);
}

