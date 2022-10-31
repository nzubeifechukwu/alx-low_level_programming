#include "main.h"

/**
 * clear_bit - sets the value of a bit at a given index to 0
 * @n: points to the number
 * @index: index
 *
 * Return: 1 if it works, -1 if error occurs
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = *n & ~(1 << index);
	return (1);
}
