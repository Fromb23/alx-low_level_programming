#include <stdio.h>

/**
 * main - This is the start of the function
 *
 * Description - This program prints combination of
 *		2 numbers that are unique ie 10 and
 *		01 should be unique
 *
 * Return: Always 0 (SUCCESS)
 *
 **/

int main(void)

{

	int outervalue = 1;
	int innervalue;

	for (innervalue = 0; innervalue <= 9; inn)
	{

	while (outervalue <= 9)
	{
	if ((('0' + innervalue) != ('0' + outervalue)))
	{
	putchar('0' + innervalue);
	putchar('0' + outervalue);
	putchar(',');
	putchar(' ');
	}

	outervalue++;
	}
	innervalue++;
	}

	putchar('\n');

	return (0);
}
