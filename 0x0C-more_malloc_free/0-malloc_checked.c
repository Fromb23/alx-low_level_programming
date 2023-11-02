#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * malloc_checked - Allocate memory using malloc
 * @b: Size of memory to allocate
 *
 * Return: Pointer to the allocated memory
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
