#include "main.h"

/**
 * print_diagonal - draws a diagonal line using the backslash \
 * @n: number of times \ will be printed
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		_putchar('\\');
		_putchar('\n');

		for (j = 0; j < i; j++)
			_putchar(' ');
	}
}

