#include "main.h"

/**
 * _pow_recursion- caluclates the power of a number using recursion
 * @x: The base number
 * @y: The exponetient number
 *
 * Return: The result of x raised to the power of y
 **/

int _pow_recursion(int x, int y)

{
	int power;

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		power = (x * _pow_recursion(x, y - 1));
		return (power);
	}
}
