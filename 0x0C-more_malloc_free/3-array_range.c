#include <stdlib.h>

/**
 * array_range - creates an array of ordered integers from min to max
 * @min: minimum number in array
 * @max: maximum number in array
 *
 * Return: pointer to the created array
 */
int *array_range(int min, int max)
{
	int i = 0;
	int elem = min;
	int *arr;
	
	arr = malloc(sizeof(*arr) * (max - min + 1));

	if (min > max)
		return (NULL);

	if (arr == NULL)
		return (NULL);

	while (elem <= max)
	{
		arr[i] = elem;
		elem++;
		i++;
	}

	return (arr);
}
