#include <stdio.h>

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: always 0
 */

int main(int argc, __attribute__((unused)) char **argv)
{
	int const n = 1;

	printf("%d", argc - n);
	printf("\n");
	return (0);
}
