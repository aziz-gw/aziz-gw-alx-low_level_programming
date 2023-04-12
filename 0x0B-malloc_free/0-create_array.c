#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: array size
 * @c: array
 *
 * Return: NULL if size is 0, or a pointer to c or NULL
 * if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr_c = malloc(sizeof(char) * size);

	if (size == 0)
		return (NULL);

	else if (ptr_c != NULL)
	{
		for (i = 0; i < size; i++)
		ptr_c[i] = c;
	}
	else
		return (NULL);

	return (ptr_c);
}
