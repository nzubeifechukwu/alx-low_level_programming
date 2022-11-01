/**
 * flip_bits - find number of bits to flip in one number to get another number
 * @n: one number
 * @m: another number
 *
 * Return: number of bits to flip in n to get m
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int n_bits = 0;

	while (m || n)
	{
		if ((n & 1) != (m & 1))
			n_bits++;
		m = m >> 1;
		n = n >> 1;
	}

	return (n_bits);
}
