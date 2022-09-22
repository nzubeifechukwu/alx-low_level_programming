/**
 * reverse_array - reverses the content of an array of integers
 * @a: array to reverse its content
 * @n: size of array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, j;
	int x = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		j = *(a + i);
		*(a + i) = *(a + x);
		*(a + x) = j;
		x--;
	}
}

