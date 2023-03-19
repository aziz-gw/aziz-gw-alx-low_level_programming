#include <stdio.h>

/**
 * main - Entry point
 * Description: prints combination of 2 digits
 * Return: always 0 (success)
 */

int main(void)
{
	int fDigit;
	int sDigit;

	for (fDigit = 0; fDigit < 10; fDigit++)
	{
		for (sDigit = 1; sDigit < 10; sDigit++)
		{
			if (fDigit < sDigit && fDigit != sDigit)
			{
				putchar(fDigit + '0');
				putchar(sDigit + '0');
				if (fDigit + sDigit != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
