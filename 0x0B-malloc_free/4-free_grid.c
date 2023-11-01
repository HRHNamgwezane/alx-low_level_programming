#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees 2D array
 * @grid: 2D grid
 * @height: height dimension of grid
 *
 * Description: frees memory of grid
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
	{
		return;
	}

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
		grid[i] = NULL;
	}

	free(grid);
}
