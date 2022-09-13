/**
 * _abs - computes the absolute value of an integer
 * @n: integer to compute its absolute value
 *
 * Return: absolute value of n
 */
int _abs(int n)
{
	int abs_val;

	if (n >= 0)
		abs_val = n;
	else
		abs_val = -1 * n;

	return (abs_val);
}

