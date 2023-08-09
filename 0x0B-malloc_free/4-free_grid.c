#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees a 2D grid previously created
 * @grid: previosly created 2D grid
 * @height: height of grid
 *
 * Return: 0
 */
void free_grid(int **grid, int height)
{
	int x;

	if (grid == NULL)
		return;

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}
	free(grid);
}
