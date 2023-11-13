#include "main.h"

/**
 * _myPutchar - writes a character to the standard output
 * @c: The characters to print
 *
 * Return: On success, 1 is returned, -1 is returned
 */

int _myPutchar(char c)
{
	return (write(1, &c, 1));
}

