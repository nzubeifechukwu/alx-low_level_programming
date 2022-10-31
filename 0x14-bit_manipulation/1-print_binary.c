#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: positive integer
 *
 * Description: don't use malloc, arrays, nor the operators / or %
 */
void print_binary(unsigned long int n)
{
	/* least significant bit (LSB) is 1 if n is odd, 0 if n is even */
	if ((n & 1) == 1)
	{
		n = n >> 1; /* divide n by 2 */
		if (n > 0)
		{
			print_binary(n);
		}
		_putchar('1');
	}
	else
	{
		n = n >> 1;
		if (n > 0)
		{
			print_binary(n);
		}
		_putchar('0');
	}
}
