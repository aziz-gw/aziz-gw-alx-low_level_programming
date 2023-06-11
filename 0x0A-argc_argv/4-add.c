#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int i;
	int j, sum = 0;
	char *str;

	if (argc < 2)
		printf("%d\n", 0);
	else
	{
		for (i = 1; i < argc; i++)
		{
			str = argv[i];
			j = 0;
			while (str[j] != '\0')
			{
				if (!isdigit(str[j]))
				{
					printf("Error\n");
					return (1);
				}
				j++;
			}
			sum += atoi(str);
		}
		printf("%d\n", sum);
	}

	return (0);
}
