#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: arg count
 * @argv: arg vector
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int a, b, result;
	result = 0;

	if (argc <= 1)
	{
		printf("0\n");
		return (0);
	}


	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b] != '\0'; b++)
		{
			if (!isdigit(argv[a][b]))
			{
				printf("Error\n");
				return (1);
			}


		}
		result += atoi(argv[a]);
	}
	printf("%d\n", result);
	return (0);
}
