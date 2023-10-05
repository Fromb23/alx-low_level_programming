#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - creates an array of integers from min to max (inclusive)
 * @min: the starting value
 * @max: the ending value
 *
 * Return: a pointer to the newly created array
 * or NULL if min > max or if malloc fails
 **/

int *array_range(int min, int max)

{
	int i;
	int *new_memory;
	int array_size;

	if (max < min)
	{
		return (NULL);
	}
	array_size = (max - min) + 1;

	new_memory = (int *)malloc(array_size * sizeof(int));
	if (new_memory == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < array_size; i++)
	{
		new_memory[i] = min + i;
	}
	return (new_memory);
}
