#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to a struct dog
 * @name: the dog
 * @age: the dog age
 * @owner: the dog owner
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));

	if (d == NULL)
		exit(98);

	d->name = name;
	d->age = age;
	d->owner = owner;

	free(d);
}
