#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to struct dog to initialize
 * @name: name to initialize
 * @age: age to initialize
 * @owner: owner to initialize
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
		if (d == NULL)
		{
			/* Handle memory allocation failure */
			return;
		}
	}

	d->name = malloc(strlen(name) + 1);
	if (d->name == NULL)
	{
		free(d); /* Clean up memory if allocation fails */
		return;
	}
	strcpy(d->name, name);

	d->age = age;

	d->owner = malloc(strlen(owner) + 1);
	if (d->owner == NULL)
	{
		free(d->name); /* Clean up memory if allocation fails */
		free(d);
		return;
	}
	strcpy(d->owner, owner);
}

