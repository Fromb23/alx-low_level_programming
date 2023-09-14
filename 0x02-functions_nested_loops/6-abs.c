#include "main.h"
#include <stdio.h>

/**
 * _abs - computes the absolute value of an integer.
 * @r: The integer to compute the absolute value of.
 *
 * Return: The absolute value of 'r'.
 **/

int _abs(int r)


{
	if (r < 0)
	{
		return (-r);
	}
	else if (r == 0)
	{
		return (0);
	}
	else
	{
		return (r);
	}
}
