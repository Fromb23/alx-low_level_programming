#include "main.h"

/**
 * main - check the code
 *
 *Description: The program prints alphabets from
 *		a-z
 * Return: Always 0
 *
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

	return;
}
