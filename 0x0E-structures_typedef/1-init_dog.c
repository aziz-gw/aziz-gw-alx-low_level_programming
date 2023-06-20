#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * init_dog - initialises a variable of type struct dog
 * @d: pointer to struct
 * @name: name of a dog
 * @age: age of a dog
 * @owner: name of dog owner
 *
 * Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = malloc(strlen(name) + 1);
	strcpy(d->name, name);

	d->age = age;

	d->owner = malloc(strlen(owner) + 1);
	strcpy(d->owner, owner);
}
