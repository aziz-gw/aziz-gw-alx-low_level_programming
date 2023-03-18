#include <stdio.h>

/**
 * main - Entry point
 * Description: prints all single digit numbers of base 10
 * Return: always zero
 */
int main(void)
{
	int number;

	for (number = 0; number <= 9; number++)
	{
		printf("%d\n", number);
	}
	return (0);
}
