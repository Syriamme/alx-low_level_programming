#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Funtion that frees a two dimensional grid
 * @grid: Pointer to pointer of array
 * @height: Height of the array
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
