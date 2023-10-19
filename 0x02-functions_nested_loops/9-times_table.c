#include "main.h"
#include <stdio.h>

/**
 * times_table - Prints the 9 times table
 **/

void times_table(void)

{
	int i, j,  number;

	for (i = 0; i < 10; i++)
	{
	for (j = 0; j < 10; j++)
	{
	number = i * j;
	if (j == 0)
	{
	_putchar('0');
	}
	else
	{
		printf(",%3d", number);
	}
	}
	printf("\n");
	}
}
