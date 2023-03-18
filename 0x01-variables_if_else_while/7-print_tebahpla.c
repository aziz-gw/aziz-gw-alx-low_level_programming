#include <stdio.h>

/**
 * main - Entry point
 * Description: prints lowercase alphabet in reverse
 * Return: always zero
 */

int main(void)
{
	int reverseAlpha = 122; /* lowercase z */

	while (reverseAlpha >= 97)
	{
		putchar(reverseAlpha);
		reverseAlpha--;
	}
	putchar('\n');
	return (0);
}

