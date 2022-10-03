#include <stdlib.h>

/**
 * create_array - creates array of chars, initializes it with a specific char
 * @size: array size
 * @c: specific char for initialization
 *
 * Return: NULL if size 0 or array creation fails; pointer to array otherwise
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	arr = malloc(size);

	while (i < size)
	{
		if (arr == NULL)
			return (NULL);
		arr[i] = c;
		i++;
	}
	return (arr);
}
