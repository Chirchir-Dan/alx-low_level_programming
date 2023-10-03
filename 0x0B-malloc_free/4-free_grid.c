#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Frees a 2D grid.
 * @grid: Pointer to the 2D array to be freed.
 * @height: The height of the grid.
 *
 * Description: This function frees the memory of a 2D grid
 * previously created by the alloc_grid function.
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
	{
		return; /* No value should be returned in a void function */
	}

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}

