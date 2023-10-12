#include "main.h"
#include <string.h>

/**
 * is_palindrome - Check if a string is a palindrome.
 * @s: The string to check.
 *
 * Return: 1 if @s is a palindrome, 0 otherwise.
 **/

int is_palindrome(char *s)

int is-palindrome(char *s, int initial, int end)

{
	if (initial >= end)
	{
		return (1);
	}
	if (s[initial] != s[end])
	{
		return (0);
	}

int is_palindrome(char *s)

{
	if (s[initial] == s[end])
	{
		return (1);
	}
	else
	{
		return (is-palindrome(char *s, initial + 1, end -1)
	}
}
