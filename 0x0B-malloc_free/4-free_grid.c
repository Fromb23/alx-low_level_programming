#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * free_grid - Frees a 2D grid previously allocated with alloc_grid.
 * @grid: The 2D grid to be freed.
 * @height: The height of the grid.
 **/

void free_grid(int **grid, int height)

{
	int i;

	if (grid == NULL)
	{
		return;
	}
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
