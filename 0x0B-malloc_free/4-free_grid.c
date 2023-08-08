#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees memory allocation
 * @grid: grid to free
 * @height: height of the grid
 */
void free_grid(int **grid, int height)
{
	int i;
	/*variable*/
	if (grid == NULL || height == 0)
		return;
	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
