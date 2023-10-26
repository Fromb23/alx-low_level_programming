#include <string.h>
#include <stdbool.h>
#include "main.h"

/**
 * helper_palindrome - checks if a substring is a palindrome recursively
 * @s: the string to check
 * @start: the starting index of the substring
 * @end: the ending index of the substring
 *
 * Return: true if it's a palindrome, false otherwise
 **/

int helper_palindrome(char *s, int start, int end)

{
	if (start >= end)
	{
		return (true);
	}
	else if (s[start] != s[end])
	{
		return (false);
	}
	else
	{
		return (helper_palindrome(s, start + 1, end - 1));
	}
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the string to check
 *
 * Return: true if it's a palindrome, false otherwise
 **/

int is_palindrome(char *s)

{
	int length = strlen(s);

	return (helper_palindrome(s, 0, length - 1));

}
