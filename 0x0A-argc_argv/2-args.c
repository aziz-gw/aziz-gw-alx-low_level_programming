#include <stdio.h>

/**
 * main - entry point
 * @argc: arg count
 * @argv: arg variable
 *
 * Return: always 0
 */

int main(__attribute__((unused)) int argc, char *argv[])
{
	int i = 0;

	while (argv[i] != 0)
	{
		printf("\n%s\n\n", argv[i]);
		i++;
	}
	return (0);
}
