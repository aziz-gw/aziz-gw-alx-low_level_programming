#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int i, x, result;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	for (i = 2; i < argc; i++)
	{
		result = atoi(argv[1]);
		x = atoi(argv[i]);
		result *= x;
		printf("%d\n", result);
	}

	return (0);
}

