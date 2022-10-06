#include <stdlib.h>

/**
 * _calloc - allocates memory for array using malloc (works same way as calloc)
 * @nmemb: number of array elements (default elements are 0)
 * @size: size of array data type
 *
 * Return: NULL if nmemb or size is 0, or if malloc fails; else, allocated mem
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(size * nmemb);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < nmemb; i++)
		arr[i] = 0;

	return (arr);
}
