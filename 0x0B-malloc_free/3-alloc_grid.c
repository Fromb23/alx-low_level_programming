#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - Allocates memory for a 2D grid of integers
 * @width: The width (number of columns) of the grid
 * @height: The height (number of rows) of the grid
 *
 * Return: A pointer to the allocated grid, or NULL on failure
 **/

int **alloc_grid(int width, int height)

{
	int i, j;
	int **array;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	array = (int **)malloc(height * sizeof(int *));

	if (array == NULL)
	{
	return (NULL);
	}
	for (i = 0; i < height; i++)
	{
	array[i] = (int *)malloc(width * sizeof(int));
	if (array[i] == NULL)
	{
		for (j = 0; j < i; j++)
		{
		free(array[j]);
		}
		free(array);
	return (NULL);
	}
	for (j = 0; j < width; j++)
	{
		array[i][j] = 0;
		}
	}

	return (array);
}
