/**
 * square_root - checks for the sqrt of a natural number beginning from 1
 * @n: given natural number
 * @r: possible sqrt of n
 *
 * Return: r the square root of n, -1 for negative numbers
 */
int square_root(int r, int n)
{
	if (r <= n / 2)
	{
		if (r * r == n)
			return (r);
		else
			return (square_root(r + 1, n));
	}
	return (-1);
}

/**
 * _sqrt_recursion - computes the square root of a natural number
 * @n: given natural number
 *
 * Return: square root of n if it's a natural number, -1 otherwise
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (square_root(0, n));
}
