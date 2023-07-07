#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number to represent in binary
 *
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
	int cnt = 0;
	unsigned long int bitMask =
		1UL << (sizeof(unsigned long int) * 8 - 1);

	while (bitMask > 0)
	{
		if (n & bitMask)
		{
			_putchar('1');
			cnt++;
		}
		else if (cnt)
			_putchar('0');

		bitMask = bitMask >> 1;
	}

	if (!cnt)
		_putchar('0');
}


