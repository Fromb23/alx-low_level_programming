#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * _calloc - Allocate memory for an array, initialized with zeros
 * @nmemb: Number of elements
 * @size: Size in bytes of each element
 *
 * Return: A pointer to the allocated memory, initialized to zero
 **/

void *_calloc(unsigned int nmemb, unsigned int size)

{
	unsigned int total_size;
	void *calloc_allocation;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total_size = nmemb * size;

	calloc_allocation = malloc(total_size);
	if (calloc_allocation == NULL)
		return (NULL);

	memset(calloc_allocation, 0, total_size);

	return (calloc_allocation);
}
