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
	void *mem;
	char *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(size * nmemb);

	if (mem == NULL)
		return (NULL);

	arr = mem;

	for (i = 0; i < nmemb; i++)
		arr[i] = 0;

	return (mem);
}
