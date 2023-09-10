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
	int number;
	int number0;

	for (number = 0; number <= 9; number++)

	{
	for (number0 = 0; number0 <= 99; number0++)

	putchar('0' + number);
	putchar('0' + number0);
	{

	if (number == 9 && number0 == 9)
	{
	putchar('\n');
	}

	else
	{
	putchar(',');
	putchar(' ');
	}
	}
	}

	return (0);
}
