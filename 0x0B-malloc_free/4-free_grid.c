#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Function that frees a 2 dimensional grid previously created
 * @grid: grid to free up
 * @height: the height of the grid
 */
void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
		free(grid[x]);
	free(grid);
}
