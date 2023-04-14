#include <stdlib.h>
#include <stddef.h>

/**
 * alloc_grid - returns a pointer to a 2D arr of ints
 * @height: height of arr
 * @width: width of arr
 *
 * Return: Pointer
 */

int **alloc_grid(int width, int height)
{
	int **arr;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = malloc(sizeof(int) * height);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(sizeof(int) * width);
		if (arr[i] == NULL)
			return (NULL);
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}
	return (arr);
}
