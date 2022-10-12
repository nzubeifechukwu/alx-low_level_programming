#include <stddef.h>

/**
 * array_iterator - executes a function given as a parameter on each array elem
 * @array: pointer to array to execute function param on
 * @size: array size
 * @action(int): pointer to function to use for execution
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
