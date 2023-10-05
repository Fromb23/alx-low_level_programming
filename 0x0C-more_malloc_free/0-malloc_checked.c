#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc and checks for success.
 * @b: The number of bytes to allocate.
 *
 * Return: Pointer to the allocated memory if successful,
 * exits with status 98 if not.
 **/

void *malloc_checked(unsigned int b)

{
	void *allocated_memory;

	allocated_memory = malloc(b);

	if (allocated_memory == NULL)
	{
		exit(98);
	}
	return (allocated_memory);
}
