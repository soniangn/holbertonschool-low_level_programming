#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - entry point
 * Description: frees dogs
 * @d: pointer to a structure
 * Return: 0
 */

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d->age);
	free(d);
}
