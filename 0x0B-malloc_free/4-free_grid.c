#include <stdlib.h>

/**
 * free_grid - frees a 2-d array
 * @grid: 2-d array
 * @height: array height or column
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int h;

	for (h = height - 1; h >= 0; h--)
		free(grid[h]);

	free(grid);
}
