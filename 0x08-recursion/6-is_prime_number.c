/**
 * is_prime - checks if an integer is prime, given a starting factor
 * @i: possible factor of integer
 * @n: integer
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime(int i, int n)
{
	if (n % i == 0)
	{
		if (n == i)
			return (1);
		else
			return (0);
	}
	return (is_prime(i + 1, n));
}

/**
 * is_prime_number - checks if an integer is prime
 * @n: integer
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n < 0)
		n = n * -1;

	if (n == 0 || n == 1)
		return (0);
	return (is_prime(2, n));
}
