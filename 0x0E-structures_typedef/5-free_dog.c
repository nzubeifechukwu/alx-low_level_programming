#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees variables of type struct dog_t
 * @d: struct dog_t to free
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
