#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string using recursion
 * @s: The character to be printed
 * Return: Return the length of a sting
 **/

int _strlen_recursion(char *s)

{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));

	else
		return (0);
}
