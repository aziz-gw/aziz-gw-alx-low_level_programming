#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 * @int: integer
 * Return: last digit
 */

int print_last_digit(int)
{
	int last;

	last = int % 10;
	if (last < 0)
	{
		_putchar(-last + 48);
		return (-last);
	}
	else
	{
		_putchar(last + 48);
		return (last);
	}
}
