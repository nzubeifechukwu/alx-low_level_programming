#include "main.h"

/**
 * print_times_table - prints the multiplication table up to n, including 0
 * @n: size of the table
 *
 * If n > 15 || n < 0, print nothing
 * Return: void
 */
void print_times_table(int n)
{
	int i, j, prod, mod;

	if (n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				prod = i * j;

				if (prod < 10)
				{
					if (j != 0)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
					}
					_putchar(prod + '0');
				}
				else if (prod < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + prod / 10);
					_putchar('0' + prod % 10);
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar('0' + prod / 100);
					mod = prod % 100;
					if (mod > 9)
					{
						_putchar('0' + mod / 10);
						_putchar('0' + mod % 10);
					}
					else
					{
						_putchar('0');
						_putchar('0' + mod % 10);
					}
				}
			}
			_putchar('\n');
		}
	}
}

