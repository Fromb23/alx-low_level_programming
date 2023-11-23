#include "main.h"

/**
 * flip_bits - Counts the number of bits
 * to flip to convert one number to another.
 * @n: The first unsigned long integer.
 * @m: The second unsigned long integer.
 *
 * Return: The number of bits to flip.
 **/

unsigned int flip_bits(unsigned long int n, unsigned long int m)

{
	unsigned int count = 0;
	unsigned long int result;

	result = n ^ m;

	while (result != 0)
	{
		if (result & 1)
			count++;
		result = result >> 1;
	}
	return (count);
}
