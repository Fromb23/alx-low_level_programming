#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description:  - This code prints alphabetic letters in lowercase
 *
 * Return: Always 0 (SUCCESS)
 **/

int main(void)

{
	char letter = 'a';

	while (letter <= 'z')
	{
	putchar(letter);

	letter++;
	}

	putchar('\n');

	return (0);
}
