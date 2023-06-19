#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure that contains a dog's properties
 * and owner
 * @name: name of a dog
 * @age: age of a dog
 * @owner: owner of a dog
 *
 * Description:  structure that contains a dog's properties
 * and owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#define dog_t struct dog
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif

