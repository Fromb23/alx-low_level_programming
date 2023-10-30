#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of characters initialized with 'c'.
 * @size: The size of the array to create.
 * @c: The character used to initialize the array.
 *
 * Return: If size is 0 or if memory allocation fails, returns NULL.
 *         Otherwise, returns a pointer to the newly created array.
 **/

char *create_array(unsigned int size, char c)

{
	unsigned int i;
	char *remote_location;

	if (size == 0)
	{
		return (NULL);
	}
	remote_location = malloc(size * sizeof(char));
	if (remote_location == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		remote_location[i] = c;
	}
	return (remote_location);
}
