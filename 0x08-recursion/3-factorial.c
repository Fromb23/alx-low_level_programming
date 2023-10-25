#include "main.h"

/**
 * factorial- calculates the factorial of a number using recursion
 * @n: The number for which to calculate the factorial
 *
 * Return: The factorial of n
 **/

int factorial(int n)

{
	int factor;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		factor = n * factorial(n - 1);
		return (factor);
	}
}
