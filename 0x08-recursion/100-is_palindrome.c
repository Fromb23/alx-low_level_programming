#include "main.h"
#include <string.h>

/**
 * is_palindrome - Check if a string is a palindrome.
 * @s: The string to check.
 *
 * Return: 1 if @s is a palindrome, 0 otherwise.
 **/

int is_palindrome(char *s)

{
	int length = strlen(s);
	int middle = length / 2;
	int i;

	for (i = 0; i < middle; i++)
	{
		if (s[i] != s[length - i - 1])
		{
			return (0);
		}
	}
	return (1);
}
