#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Create an array of characters and
 * initialize it with a given character
 * @size: The size of the array to create
 * @c: The character to initialize the array elements with
 *
 * Return: A pointer to the newly created array,
 * or NULL if size is 0 or if memory allocation fails
 **/

char *create_array(unsigned int size, char c)

{
	char *char_array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	char_array = (char *)malloc(size * sizeof(char));

		if (char_array == NULL)
		{
		return (NULL);
		}


	for (i = 0; i < size; i++)
	{
	char_array[i] = c;
	}
	return (char_array);

}
