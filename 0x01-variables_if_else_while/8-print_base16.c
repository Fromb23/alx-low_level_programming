#include <stdio.h>

/**
*main - Entry Point
*
*Description - This program prints all the numbers of base
*		16 lowercase, followed by a new line
*
*Return: Always 0 (SUCCESS)
*
**/

int main(void)

{
	int hexadecimal = 0x0;

	while (hexadecimal <= 0xf)
	{
	putchar(hexadecimal < 10 ? ('0' + hexadecimal) : ('a' + hexadecimal - 10));

	hexadecimal++;
	}

	putchar('\n');

	return (0);
}
