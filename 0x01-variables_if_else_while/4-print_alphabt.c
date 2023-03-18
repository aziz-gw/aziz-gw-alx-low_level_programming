#include <stdio.h>

/**
 * main - Entry point
 * Description: prints alphabets in lowercase except q and e
 * Return: lowercase alphabet
 */

int main(void)
{
	int asciiValueA = 97; /* lowercase */

	while (asciiValueA <= 122) /* 122 ascii value for lowercase z */
	{
		if (asciiValueA == 101 || asciiValueA == 113)
		{
			asciiValueA++;
			continue;
		}
		putchar(asciiValueA);
		asciiValueA++;
	}
	putchar('\n');
	return (0);
}
