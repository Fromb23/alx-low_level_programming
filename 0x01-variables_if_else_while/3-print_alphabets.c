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
	char lowercase = 'a';

	char uppercase = 'A';

	while (lowercase <= 'z')
	{
	putchar(lowercase);

	lowercase++;
	}

	while (uppercase <= 'Z')
	{
	putchar(uppercase);
	uppercase++;
	}

	putchar('\n');

	return (0);
}
