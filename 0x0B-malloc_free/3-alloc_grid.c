#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2-d array of integers
 * @width: grid width or columns
 * @height: grid height or rows
 *
 * Return: a height * width 2-d array
 */
int **alloc_grid(int width, int height)
{
	int w, h, **grid;

	if (width < 1 || height < 1)
		return (NULL);

	/* allocating memory space for grid rows */
	grid = malloc(sizeof(int *) * height);

	/* allocating memory space for grid columns */
	for (h = 0; h < height; h++)
		grid[h] = malloc(sizeof(int) * width);

	if (grid == NULL)
		return (NULL);

	for (h = 0; h < height; h++)
	{
		for (w = 0; w < width; w++)
			grid[h][w] = 0;
	}

	return (grid);
}
