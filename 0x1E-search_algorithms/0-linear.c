#include "search_algos.h"

/**
 * linear_search - Performs a linear search on an array.
 * @array: The array to search.
 * @size: The size of the array.
 * @value: The value to search for.
 *
 * Return: The index of the first occurrence of the value,
 *         or -1 if the value is not found.
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (array[i] == value)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			return (i);
		}
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);

	}

	return (-1);
}
