#include "main.h"

void print_triangle(int size)

{

	int space;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (space = 0; space = size - 1; space++)
		{
			_putchar('_');
		}
		_putchar('#');
	}
	_putchar('\n');
}
