#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - Execute a function on each element of an array
 * @array: The array to iterate over
 * @size: The size of the array
 * @action: A function pointer to the action to perform on each element
 **/

void array_iterator(int *array, size_t size, void (*action)(int))

{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
