#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array using a comparison function.
 * @array: Pointer to the integer array.
 * @size: The number of elements in the array.
 * @cmp: Pointer to the comparison function.
 *
 * Return: Index of the first matching element, or -1 if not found or on error.
 **/

int int_index(int *array, int size, int (*cmp)(int))

{
	int i, result;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		result = (*cmp)(array[i]);
	if (result != 0)
		{
		return (i);
		}
	}

	return (-1);
}
