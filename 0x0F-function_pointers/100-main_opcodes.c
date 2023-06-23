#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own opcodes
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int bytes, i;
	char *p_main;

	p_main = (char *)main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < bytes; i++)
	{
		if (i == bytes - 1)
		{
			printf("%02hhx\n", p_main[i]);
			break;
		}

		printf("%02hhx", p_main[i]);
	}

	return (0);
}
