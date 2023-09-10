#include <stdio.h>

/**
 * main - Entry point of the Program
 *
 * Description: This code prints all possible combiantionsof numbers
 *		between 0-99
 *
 * Return: Always 0 (SUCCESS)
 *
 **/

int main(void)

{
	int number = 0;

	while (number <= 99)
	{

	if (number < 10)
	{
	putchar('0' + number / 10);
	putchar('0' + number % 10);
	putchar(' ');
	}

	else
	{
	putchar('0' + number / 10);
	putchar('0' + number % 10);
	putchar(' ');
	}

	number++;

	}
	putchar('\n');

	return (0);
}
