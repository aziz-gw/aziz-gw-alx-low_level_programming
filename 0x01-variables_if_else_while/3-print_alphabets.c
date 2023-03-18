#include <stdio.h>
/**
 * main - Entry point
 * Description: prints lowercase and then uppercase alphabets
 * Return: always zero
 */

int main(void)
{
	int asciiValueAlowercase = 97;
	int asciiValueAuppercase = 65;

	while (asciiValueAlowercase <= 122) /* 122 ascii value for lowercase z */
	{
		putchar(asciiValueAlowercase);
		asciiValueAlowercase++;
	}
	while (asciiValueAuppercase <= 90) /* 90 ascii value for uppercase z */
	{
		putchar(asciiValueAuppercase);
		asciiValueAuppercase++;
	}
	putchar('\n');
	return (0);
}

