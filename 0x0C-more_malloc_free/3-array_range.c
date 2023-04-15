#include "main.h"
#include <stdlib.h>

/**
 * array_range - create an array of integers
 * @min: min integer
 * @max: max integer
 *
 * Return: pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int size = (max - min) + 1;
	int index, *ptr_arr;

	ptr_arr = malloc((sizeof(int) * size));
	if (min > max)
		return (NULL);

	if (ptr_arr == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		ptr_arr[index] = min + index;

	return (ptr_arr);
}

