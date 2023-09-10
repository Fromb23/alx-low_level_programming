#include <stdio.h>

/**
*main - The main function of the code
*
*Description: The program print possible combinations
*		of single digit numbers
*
*Return: Always 0 (SUCCESS)
*
**/

int main(void)

{

	int number = 0;

	while (number < 10)
	{
	putchar('0' + number);

	if (number < 9)
	{
	putchar(',');
	putchar(' ');
	}
	number++;
	}

	putchar('\n');

	return (0);
}
