#include "dog.h"
#include <stdlib.h>

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
	long int len_name = 0, len_owner = 0;
	long int i, j;

	while (name[len_name] != '\0')
		len_name++;

	d->name = malloc(len_name + 1);

	if (d->name != NULL)
	{
		for (i = 0; i <= len_name; i++)
		d->name[i] = name[i];
	}
	else
		return;
	free(d->name);

	d->age = age;

	while (owner[len_owner] != '\0')
		len_owner++;

	d->owner = malloc(len_name + 1);

	if (d->owner != NULL)
	{
		for (j = 0; j <= len_owner; j++)
		d->owner[j] = owner[j];
	}
	else
		return;
	free(d->owner);
}
