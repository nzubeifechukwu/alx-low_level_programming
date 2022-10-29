#include <string.h>

/**
 * _pow - computes the value of x raised to the power of y
 * @x: base
 * @y: power
 *
 * Return: x**y
 */
unsigned int _pow(unsigned int x, unsigned int y)
{
	if (y == 0)
		return (1);
	return (x * _pow(x, y - 1));
}

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: binary number
 *
 * Return: converted number; 0 if b==NULL or 1 or more chars in b is not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int len = 0;
	unsigned int i;
	unsigned int dec = 0;

	if (b == NULL)
		return (0);

	while (b[len])
		len++;

	for (i = 0; i < len; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] != '0')
			dec += _pow(2, (len - 1) - i);
	}
	return (dec);
}
