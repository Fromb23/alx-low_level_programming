#include "main.h"

/**
 * _puts_recursion - Prints a string, followed by a new line.
 * @s: A pointer to the string to be printed.
 *
 * Description: This function prints the characters of a string
 * one by one using recursion, followed by a newline character.
 **/

void _puts_recursion(char *s)

{

	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
	_putchar('\n');
	}
}
