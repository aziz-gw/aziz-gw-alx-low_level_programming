#include <stdio.h>

/**
 * main - Entry point
 * Description: prints single digit numbers using putchar
 * Return: always zero
 */

int main(void)
{
	int number;

	for (number = 0; number <= 9; number++)
	{
		putchar(number + 48);
	}
	putchar('\n');
	return (0);
}
