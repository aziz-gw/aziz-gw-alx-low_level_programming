#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: size of memory
 *
 * Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *ptr_b = malloc(sizeof(unsigned int) * b);

	if (ptr_b == NULL)
		exit(98);
	return (ptr_b);
}
