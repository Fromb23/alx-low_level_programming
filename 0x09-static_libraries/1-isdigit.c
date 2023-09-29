#include "main.h"

/**
 * _isdigit - Checks if an integer is a digit (0-9).
 * @number: The integer to be checked.
 *
 * Return: 1 if the integer is a digit, 0 otherwise.
 **/

int _isdigit(int number)

{

	if (number >= '0' && number <= '9')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
