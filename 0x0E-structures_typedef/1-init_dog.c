#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Initializes a variable of type struct dog
 * @d:       Pointer to a struct dog to initialize
 * @name:    Name to initialize
 * @age:     Age to initialize
 * @owner:   Owner to initialize
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

	/* Allocate memory for 'name' and 'owner' */
	d->name = malloc(strlen(name) + 1);
	d->owner = malloc(strlen(owner) + 1);

	if (d->name == NULL || d->owner == NULL)
	{
		/* Handle memory allocation failure */
		if (d->name != NULL)
		{
			free(d->name);
		}
		if (d->owner != NULL)
		{
			free(d->owner);
		}
		free(d);
		return;
	}

	strcpy(d->name, name);
	d->age = age;
	strcpy(d->owner, owner);
}
