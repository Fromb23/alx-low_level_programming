#include "main.h"

/**
 * print_alphabet - prints the lowercase alphabet from 'a' to 'z'
 *
 * Description: This function prints lowercase letters from 'a' to 'z'
 * using the _putchar function.
 *
 * Return: No return value (void).
 **/
void print_alphabet(void)
{

	char first_letter = 'a';

	while (first_letter <= 'z')
	{
	_putchar(first_letter);
	first_letter++;
	}

	_putchar('\n');
}
