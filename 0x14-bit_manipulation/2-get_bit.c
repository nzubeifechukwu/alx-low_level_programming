#include "main.h"

/**
 * get_bit - find the value of a bit at a given index
 * @n: number to check for its bit at the given index
 * @index: index
 *
 * Return: value of bit at the index, -1 if error occurred
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int x = n;
	unsigned int digits = 0;

	while (x > 0)
	{
		x = x >> 1;
		digits++;
	}

	if (index >= digits)
		return (-1);

	if (n & (1 << index))
		return (1);
	return (0);
}
