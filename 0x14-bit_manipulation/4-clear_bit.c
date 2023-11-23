#include "main.h"
#include <limits.h>

/**
 * clear_bit - Clears the value of a bit at a given index to 0.
 * @n: A pointer to the unsigned long integer.
 * @index: The index of the bit to clear.
 *
 * Return: 1 if successful, or -1 on error.
 **/

int clear_bit(unsigned long int *n, unsigned int index)

{
	if (index >= CHAR_BIT * sizeof(unsigned long int))
		return (-1);

	*n = *n & ~(1 << index);

	return (1);
}
