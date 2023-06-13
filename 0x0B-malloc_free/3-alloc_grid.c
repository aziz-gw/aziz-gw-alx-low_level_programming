#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array
 * of integers
 * @width: width
 * @height: height
 *
 * Return: pointer to a 2D array of integers
 */

int **alloc_grid(int width, int height)
{
	int **arr_p;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	arr_p = malloc(sizeof(int *) * height);

	if (arr_p == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		arr_p[i] = malloc(sizeof(int) * width);

		if (arr_p[i] == NULL)
		{
			for (; i >= 0; i--)
				free(arr_p[i]);
			free(arr_p);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			arr_p[i][j] = 0;
	}

	return (arr_p);
}
