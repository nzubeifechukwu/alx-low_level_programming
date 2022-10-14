#include <stdarg.h>

/**
 * sum_them_all - sums all its parameters
 * @n: number of parameters
 *
 * Return: sum of all parameters, 0 if n is 0
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int i;
	va_list ap;

	if (n == 0)
		return (0);

	sum = 0;
	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum = sum + va_arg(ap, int);

	va_end(ap);

	return (sum);
}
