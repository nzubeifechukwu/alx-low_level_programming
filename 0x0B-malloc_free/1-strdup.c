#include <stdlib.h>

/**
 * _strdup - returns a pointer to a copy of a string
 * @str: string whose copy will be returned
 *
 * Return: NULL if str==NULL or insuff memory was available; else, copy of str
 */
char *_strdup(char *str)
{
	int i = 0;
	int size = 0;
	char *str_cp;

	if (str == NULL)
		return (NULL);

	while (*(str + size))
		size++;

	str_cp = malloc(size);

	while (i < size)
	{
		if (str_cp == NULL)
			return (NULL);

		str_cp[i] = str[i];
		i++;
	}
	return (str_cp);
}
