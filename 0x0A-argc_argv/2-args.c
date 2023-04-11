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
	int i;

	if (argc != 0)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s\n\n", argv[i]);
		}
	}
	return (0);
}
