/**
 * square_root - checks for the sqrt of a natural number beginning from 1
 * @n: given natural number
 * @r: possible sqrt of n
 *
 * Return: r the square root of n, -1 for negative numbers
 */
int square_root(int r, int n)
{
	int next_r = (r + (n / r)) / 2; /* next_r converges to sqrt of n */

	if (n < 0)
		return (-1);
	else if (r * r <= n && (r + 1) * (r + 1) > n)
		return (r);
	else
		return (square_root(next_r, n));
}

/**
 * _sqrt_recursion - computes the square root of a natural number
 * @n: given natural number
 *
 * Return: square root of n if it's a natural number, -1 otherwise
 */
int _sqrt_recursion(int n)
{
	int r = square_root(1, n);

	if (r * r != n)
		return (-1);

	return (square_root(r, n));
}
