/**
 * factorial - computes the factorial of a given number. Factorial of 0 is 1
 * @n: given number
 *
 * Return: -1 if n is negative, factorial of n otherwise
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n > 0)
		return (n * factorial(n - 1));
	else
		return (-1);
}
