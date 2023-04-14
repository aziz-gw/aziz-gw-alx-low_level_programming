#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2D array
 * @grid: array to be freed
 * @height: array height
 *
 * Return: void
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
