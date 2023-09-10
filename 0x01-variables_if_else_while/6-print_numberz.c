#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point
*
* Description:  - This program prints all digit numbers
*                     of base 10 starting from 0 as strings
*
* Return: Always 0 (SUCCESS)
**/

int main(void)

{
	int number;

	for (number = 0; number <= 9; number++)

	{
	putchar('0' + number);
	}

	putchar('\n');

	return (0);
}
