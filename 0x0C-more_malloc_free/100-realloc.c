#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _realloc - Reallocate memory for a pointer
 * @ptr: Pointer to the memory to reallocate
 * @old_size: Old size of the memory block
 * @new_size: New size of the memory block
 *
 * Return: A pointer to the reallocated memory
 **/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)

{
	int i, min_size;
	char *realloc_allocation;

	min_size = old_size < new_size ? old_size : new_size;

	if (new_size == old_size)
	{
		return (ptr);
	}
	realloc_allocation = malloc(new_size);
	if (realloc_allocation == NULL)
	{
		return	(NULL);
	}
	if (ptr == NULL)
	{
		return (realloc_allocation);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (i = 0; i < min_size; i++)
	{
		realloc_allocation[i] = ((char *)ptr)[i];
	}
	free(ptr);

	return (realloc_allocation);
}
