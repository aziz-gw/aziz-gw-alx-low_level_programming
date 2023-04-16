#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

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

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	result = a * b;
	printf("%d\n", result);

	return (0);
}
