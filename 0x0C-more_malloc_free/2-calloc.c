#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - allocates memory for an array, initializes it with zero
 * @nmemb: number of elements
 * @size: size of each element
 *
 * Return: a pointer to the allocated memory or NULL if failure
 **/

void *_calloc(unsigned int nmemb, unsigned int size)

{
	void *memory_allocation;
	int total_size;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	total_size = nmemb * size;

	memory_allocation = malloc(total_size);

	if (memory_allocation == NULL)
	{
		return (NULL);
	}

	memset(memory_allocation, 0, total_size);

	return (memory_allocation);
}
