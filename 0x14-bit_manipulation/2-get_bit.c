#include "main.h"
#include <limits.h>

/**
 * get_bit - Gets the value of a bit at a given index.
 * @n: The unsigned long integer.
 * @index: The index of the bit to retrieve.
 *
 * Return: The value of the bit at the specified index, or -1 on error.
 **/

int get_bit(unsigned long int n, unsigned int index)

{
	unsigned int bitmask;

	if (index >= (CHAR_BIT * sizeof(unsigned long int)))
		return (-1);

	bitmask = n >> index;
	bitmask = 1 & bitmask;

	return (bitmask);
}
