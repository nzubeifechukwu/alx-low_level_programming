#include <stdlib.h>

/**
 * _realloc - reallocates memory block using malloc and free. Equiv to realloc
 * @ptr: pointer to previously allocated memory using malloc(old_size)
 * @old_size: size of allocated memory for ptr
 * @new_size: size of new memory block
 *
 * Return: pointer to d new memory block, NULL if ptr is NULL and new_size is 0
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	void *new_ptr;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = malloc(new_size);

	if (ptr == NULL)
	{
		return (new_ptr);
	}

	if (new_ptr == NULL)
		return (new_ptr);

	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
		{
			((char *)new_ptr)[i] = ((char *)ptr)[i];
		}
	}
	else
	{
		for (i = 0; i < new_size; i++)
		{
			((char *)new_ptr)[i] = ((char *)ptr)[i];
		}
	}

	free(ptr);
	return (new_ptr);
}
