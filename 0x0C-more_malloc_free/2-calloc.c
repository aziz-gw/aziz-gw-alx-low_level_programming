#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _calloc - allocates for an array using malloc
 * @nmemb: number of array elements
 * @size: size byte of each element
 *
 * Return: pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int index_h, index_w, *ptr_arr;

	ptr_arr = malloc((sizeof(unsigned int) * nmemb));
	if (nmemb == 0 || size == 0)
		return (NULL);
	if (ptr_arr == NULL)
		return (NULL);
	for (index_h = 0; ptr_arr[index_h] < nmemb; index_h++)
		for (index_w = 0; ptr_arr[index_w] < nmemb; index_w++)
		ptr_arr[index_h] = 0;
	return (ptr_arr);
}
