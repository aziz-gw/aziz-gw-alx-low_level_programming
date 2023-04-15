#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * _calloc - allocates for an array using malloc
 * @nmemb: number of array elements
 * @size: size byte of each element
 *
 * Return: pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int arr_index, *ptr_arr;

	ptr_arr = malloc((nmemb * size));
	if (nmemb == 0 || size == 0)
		return (NULL);
	if (ptr_arr == NULL)
		return (NULL);
	for (arr_index = 0; arr_index < nmemb; arr_index++)
		memset(ptr_arr + (arr_index * size), 0, size);

	return (ptr_arr);
}
