#include <stdio.h>

/**
 * print_diagsums - prints sum of two diagonals of a square matrix of integers
 * @a: square array
 * @size: row and column size
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, rsum, lsum;

	rsum = 0;
	lsum = 0;

	for (i = 0; i < size; i++)
	{
		rsum += *(a + (i * size) + (size - i - 1)); /* a[i][siz-i-1] */
		lsum += *(a + (i * size) + i); /* a[i][j] = a[i][i] */
	}
	printf("%d, %d\n", lsum, rsum);
}

