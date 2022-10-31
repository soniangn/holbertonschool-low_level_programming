#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - entry point
 * Description: creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: 0
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	char *copy_name;
	char *copy_owner;
	int length_name, length_owner;
	int i;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
	{
		return (NULL);
		free(d);
	}

	length_name = strlen(name);
	length_owner = strlen(owner);

	copy_name = malloc(sizeof(char) * length_name);
	copy_owner = malloc(sizeof(char) * length_owner);

	for (i = 0; name[i] != '\0'; i++)
		copy_name[i] = name[i];

	for (i = 0; owner[i] != '\0'; i++)
		 copy_owner[i] = owner[i];

	d->name = name;
	d->age = age;
	d->owner = owner;
	return (d);
}
