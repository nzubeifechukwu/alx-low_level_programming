#include "main.h"

/**
 * print_diagonal - draws a diagonal line using the backslash
 * @n: number of times backslash will be printed
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int i = 0, j;

	if (n < 1)
	{
		_putchar('\n');
	}
	else
	{
		while (i < n)
		{
			j = i;

			while (j--)
				_putchar(' ');

			_putchar('\\');
			_putchar('\n');
			i++;
		}
	}
}

