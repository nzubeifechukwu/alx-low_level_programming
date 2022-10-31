#include "main.h"

/**
 * set_bit - sets value of a bit at a given index to 1
 * @n: points to the number
 * @index: index
 *
 * Return: 1 if it worked, -1 if it fails
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = *n | (1 << index);

	return (1);
}
