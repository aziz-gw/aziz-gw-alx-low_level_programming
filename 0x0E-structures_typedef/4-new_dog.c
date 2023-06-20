#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - creates a new dog
 * @name: name of a dog
 * @age: age
 * @owner: owner
 *
 * Return: pointer to dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;

	p = malloc(sizeof(dog_t));
	if (p == NULL)
		return (NULL);

	p->name = malloc(strlen(name) + 1);
	if (p->name == NULL)
		return (NULL);

	strcpy(p->name, name);

	p->age = age;

	p->owner = malloc(strlen(owner) + 1);
	if (p->owner == NULL)
		return (NULL);

	strcpy(p->owner, owner);

	return (p);
}
