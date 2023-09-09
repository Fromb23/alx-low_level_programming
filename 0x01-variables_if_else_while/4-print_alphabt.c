#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description:  - This code prints alphabetics in lowercase execept
 *			'q' and 'e'
 *
 * Return: Always 0 (SUCCESS)
 **/

int main(void)

{
	char letter = 'a';

	do

	{
	if (letter != 'e' && letter != 'q')
	{
	putchar(letter);

	}
	letter++;
	}

	while (letter <= 'z');

	putchar('\n');

	return (0);
}
