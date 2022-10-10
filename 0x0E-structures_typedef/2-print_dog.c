#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints the attributes of a struct dog
 * @d: pointer to the struct dog
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name)
			printf("Name: %s\n", d->name);
		else
			puts("Name: (nil)");

		if (d->age)
			printf("Age: %.6f\n", d->age);
		else
			puts("Age: (nil)");

		if (d->owner)
			printf("Owner: %s\n", d->owner);
		else
			puts("Owner: (nil)");
	}
}
