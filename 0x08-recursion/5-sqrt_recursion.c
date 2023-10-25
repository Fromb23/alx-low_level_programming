#include "main.h"

/**
 * sqrt_recursive- calculates the square root of a number using recursion
 * @n: The number for which to calculate the square root
 *@g: The guess for the square root
 *Return: returns the square root of n
 **/

int sqrt_recursive(int n, int g)

{
	int g2;

	g2 = g * g;

	if (g2 > n)
	{
		return (-1);
	}
	else if (g * g == n)
	{
		return (g);
	}
	else
	{
		return (sqrt_recursive(n, g + 1));
	}
}

/**
 * _sqrt_recursion- calculate the square root of a number using recursion
 * @n: The number for which to calculate the square root
 *
 * Return: returns the square root of n
 **/

int _sqrt_recursion(int n)

{
	if (n <= 0)
	{
		return (-1);
	}
	else
	{
		return (sqrt_recursive(n, 1));
	}
}
