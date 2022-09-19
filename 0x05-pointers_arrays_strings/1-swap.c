/**
 * swap_int - swaps the values of two integers
 * @a: pointer to first integer
 * @b: pointer to second integer
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a; /* x holds the value a points to */
	*a = *b; /* this makes the val a points to equal to val b points to */
	*b = x; /* makes val b points 2 equals x, ie originl val a pointed 2 */
}

