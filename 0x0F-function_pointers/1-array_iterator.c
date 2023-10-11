#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - Execute a function on each element of an integer array.
 * @array: Pointer to the integer array.
 * @size: The number of elements in the array.
 * @action: Pointer to the function to execute on each element.
 **/

void array_iterator(int *array, size_t size, void (*action)(int))

{
	size_t i;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
}
