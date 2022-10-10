#include "dog.h"
#include <stdlib.h>

/**
 * _strcpy - copies a string
 * @s: string to copy
 *
 * Return: pointer to new copy of string
 */
char *_strcpy(char *s)
{
	char *scp;
	int i;

	scp = malloc(sizeof(*s) + 1);

	if (scp == NULL)
		return (NULL);

	for (i = 0; *(s + i); i++)
		scp[i] = s[i];

	scp[i] = '\0';
	return (scp);
}

/**
 * new_dog - creates a new dog_t
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: pointer to the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog = malloc(sizeof(*ndog));

	if (ndog == NULL)
		return (NULL);

	ndog->name = _strcpy(name);
	if (ndog->name == NULL)
	{
		free(ndog);
		return (NULL);
	}

	ndog->age = age;

	ndog->owner = _strcpy(owner);
	if (ndog->owner == NULL)
	{
		free(ndog->name);
		free(ndog);
		return (NULL);
	}

	return (ndog);
}
