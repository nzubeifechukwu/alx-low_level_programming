/**
 * _pow_recursion - computes the value of x raised to the power of y
 * @x: base
 * @y: power
 *
 * Return: -1 if y less than 0, x**y otherwise
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y > 0)
		return (x * _pow_recursion(x, y - 1));
	else
		return (-1);
}
