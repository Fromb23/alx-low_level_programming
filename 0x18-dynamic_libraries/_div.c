#include "main.h"

int my_div(int a, int b)
{
	int result;

	if (b == 0)
		return (-1);
	result = a / b;

	return (result);
}
