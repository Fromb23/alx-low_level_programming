#include "main.h"

/**
 * print_alphabet_x10 - prints the lowercase alphabet from 'a' to 'z' x10
 *
 * Description: This function prints lowercase letters from 'a' to 'z'
 *              using the _putchar function 10 times.
 *
 * Return: No return value (void).
 **/

void print_alphabet_x10(void)

{
	char letter;
	int count;

	for (count = 1; count <= 10; count++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
		_putchar(letter);
		}
			if (count < 11)
			{
			_putchar('\n');
			}
	}
}
