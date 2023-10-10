#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Prints information about a dog
 * @d: Pointer to the struct dog
 *
 * Description: This function prints information about a dog.
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", d->name);
		printf("Age: %.2f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
	else
	{
		printf("Dog not found\n");
	}
}

