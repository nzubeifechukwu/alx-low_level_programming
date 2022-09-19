#include <stdio.h>

/**
 * print_array - prints first n elements of an array of integers
 * @a: integer array
 * @n: number of elements to print, beginning from the first
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i > 0)
			printf(", ");

		printf("%d", a[i]);
	}

	printf("\n");
}
