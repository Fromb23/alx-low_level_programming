#include "function_pointers.h"

/**
 * int_index - Searches for an integer inside an array.
 * @array: The array to search through.
 * @size: The size of the array.
 * @cmp: The function to use for comparison.
 *
 * Return: The index of the first element for which cmp does not return 0.
 *         If no elements match or size is less than or equal to 0, return -1.
 **/

int int_index(int *array, int size, int (*cmp)(int))

{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
