#include "main.h"
#include <string.h>

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to the binary string.
 *
 * Return: The converted unsigned int, or 0 if @b is NULL or contains
 *         characters other than '0' and '1'.
 **/

unsigned int binary_to_uint(const char *b)

{
	int len_b = strlen(b), i;
	unsigned int integer = 0;

	if (b == NULL)
		return (0);
	for (i = 0; i < len_b; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		integer = (integer << 1) + (b[i] - '0');
	}
	return (integer);
}
