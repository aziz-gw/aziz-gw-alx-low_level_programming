#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocate memory using malloc
 * @b: object to allocate memory
 *
 * Return: pointer to object
 */

void *malloc_checked(unsigned int b)
{
	int *b_ptr;

	b_ptr = malloc(b);
	if (b_ptr == NULL)
		exit(98);

	return (b_ptr);
}
