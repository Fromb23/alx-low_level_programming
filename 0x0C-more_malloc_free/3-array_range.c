#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * array_range - Create an array of integers from min to max
 * @min: Minimum value
 * @max: Maximum value
 *
 * Return: A pointer to the array of integers
 **/

int *array_range(int min, int max)

{
	int i, *array_allocation, array_elements;

	if (min > max)
		return (NULL);

	array_elements = max - min + 1;

	array_allocation = malloc(array_elements * sizeof(int));
	if (array_allocation == NULL)
		return (NULL);
	for (i = 0; i < array_elements; i++)
	{
		array_allocation[i] = min + i;
	}
	return (array_allocation);
}
