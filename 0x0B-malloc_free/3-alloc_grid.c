#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Allocates a 2D grid of integers.
 * @width: The width of the grid.
 * @height: The height of the grid.
 *
 * Return: If width or height is less than or equal to 0, returns NULL.
 *         Otherwise, returns a pointer to the allocated grid.
 **/

int **alloc_grid(int width, int height)

{
	int **grid, *memory_width, i, j;

	if (width  <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));

	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		memory_width = malloc(width * sizeof(int));
		if (memory_width == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
				return (NULL);
			}
		}
		else
		{
			grid[i] = memory_width;
		}
	}
		for (i = 0; i < height; i++)
		{
			for (j = 0; j < width; j++)
			{
				grid[i][j] = 0;
			}
		}
	return (grid);
}
