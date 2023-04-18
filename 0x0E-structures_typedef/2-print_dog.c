#include "dog.h"
#include <stdio.h>

/**
 * print_dog - print a struct dog
 * @d: struct
 *
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name != NULL)
		printf("Name: %s\n", d->name);
	else
		printf("(nil)");

	if (d->age != 0.0)
		printf("Age: %f\n", d->age);
	else
		printf("%f\n", 0.0);

	if (d->owner != NULL)
		printf("Owner: %s\n", d->owner);
	else
		printf("%s\n", d->owner);
}
