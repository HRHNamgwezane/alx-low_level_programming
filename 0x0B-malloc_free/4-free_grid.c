#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees 2 dimensional grid
 * @grid: 2D grid
 * @height: heigh of grid to be freed
 *
 * Return: none
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		if (grid[i] != NULL)
		{
			free(grid[i]);
			grid[i] = NULL;
		}
	}
	free(grid);
}
