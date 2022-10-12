/**
 * int_index - searches for an integer
 * @array: integer array to search for an integer
 * @size: number of elements in array
 * @cmp(int): function to use to compare values
 *
 * Return: index of 1st matching elem, -1 if size <= 0 or no matching elem
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
