#include <stdio.h>

/**
 * main - Entry point
 * Description: prints alphabet in lowercase
 * Return: always zero
 */

int main(void)
{
	int asciiValueA = 97;

	while (asciiValueA <= 122)
	{
		putchar(asciiValueA);
		asciiValueA++;
	}
	putchar('\n');
	return (0);
}
