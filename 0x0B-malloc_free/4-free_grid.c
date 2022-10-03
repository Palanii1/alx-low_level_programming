#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - frees a two dimensional grid
 * @grid: pointer to pointer
 * @height: integer
 */

void free_grid(int **grid, int height)
{
	int a;

	if (grid == NULL)
		return;
	for (a = 0; a < height; a++)
		free(grid[a]);
	free(grid);
}
