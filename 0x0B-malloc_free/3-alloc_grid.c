#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int **alloc_grid(int width, int height)

{
	if (width == 0 || height == 0)
	{
		return (NULL);
	}

