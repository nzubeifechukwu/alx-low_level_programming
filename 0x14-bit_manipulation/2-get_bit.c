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
	if (index > 63)
		return (-1);

	if (n & (1 << index))
		return (1);
	return (0);
}
