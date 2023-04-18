#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - variable initialization
 * @d: pointer
 * @name: Dog name
 * @age: Dog age
 * @owner: Dog owner
 *
 * Return: On success 1.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
