#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: an arr of ints
 * @size: size
 * @cmp: function pointer
 *
 * Return: index of the first element for which the
 * cmp function does not return 0, -1 if no elems match
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != '\0')
			return (i);
	}

	return (-1);
}
