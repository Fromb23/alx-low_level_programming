#include "main.h"
#include <stdlib.h>

/**
 * _abs - computes the absolute value of an integer.
 *@r: The integer to compute the absolute value of.
 *
 * Return: The absolute value of 'r'.
 **/

int _abs(int r)


{
	int absolute;

	if (r < 0)
	{
	absolute = abs(r);
	return (absolute);
	}
	else
	{
	return (r);
	}
}
