#include <stdio.h>

/**
 * main - Entry point
 * Description: print combination of numbers
 * Return: lowercase alphabet
 */

int main(void)
{
	int numCombo;

	for (numCombo = 48; numCombo <= 57; numCombo++)
	{
		putchar(numCombo);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}

