#include "main.h"

/**
 * get_endianness - Checks the endianness of the system.
 *
 * Return: 1 if little-endian, 0 if big-endian.
 **/

int get_endianness(void)

{
	int indian = 1, i = 0;
	char *ptr = (char *)&indian;

	if (ptr[i] == 1)
		return (1);
	else
		return (0);
}
