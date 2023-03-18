#include <stdio.h>

/**
 * main - Entry point
 * Description: prints all numbers of base 16
 * Return: always zero
 */

int main(void)
{
	int numbers;
	int letters;

	for (numbers = 48; numbers <= 57; numbers++) /* 48, 5 for 0 and 9 */
	{
		putchar(numbers);
	}
	for (letters = 97; letters <= 102; letters++) /*102 for letter f */
	{
		putchar(letters);
	}
	putchar('\n');
	return (0);
}

