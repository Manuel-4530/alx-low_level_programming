#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - Function that creates a new dog.
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: Owner of the dog.
 *
 * Return: The new struct dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;
	char *cname, *cowner;
	int len1, len2, i;

	ptr = malloc(sizeof(dog_t));
	if (!ptr)
		return (NULL);
	for (len1 = 0; name[len1]; len1++)
		;
	for (len2 = 0; owner[len2]; len2++)
		;
	len1++;
	len2++;
	cname = malloc(len1);
	if (!cname)
	{
		free(ptr);
		return (NULL);
	}
	cowner = malloc(len2);
	if (!cowner)
	{
		free(cname);
		free(ptr);
		return (NULL);
	}
	for (i = 0; i < len1; i++)
		cname[i] = name[i];
	for (i = 0; i < len2; i++)
		cowner[i] = owner[i];

	ptr->name = cname;
	ptr->owner = cowner;
	ptr->age = age;

	return (ptr);
}
