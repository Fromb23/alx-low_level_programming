#include "main.h"
#include <limits.h>

/**
 * set_bit - Sets the value of a bit at a given index to 1.
 * @n: A pointer to the unsigned long integer.
 * @index: The index of the bit to set.
 *
 * Return: 1 if successful, or -1 on error.
 **/

int set_bit(unsigned long int *n, unsigned int index)

{
	if (index >= CHAR_BIT * sizeof(unsigned long int))
		return (-1);

	*n = *n | (1 << index);

	return (1);
}
