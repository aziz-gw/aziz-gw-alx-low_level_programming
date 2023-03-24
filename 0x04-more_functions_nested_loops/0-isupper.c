#include "main.h"

/**
 * _isupper - checks for uppercase character
 *
 * @n: ASCII character to be checked
 *
 * Return: 1 if c is uppercase, 0 otherwise
 */

int _isupper(int n)
{

	if (n >= 65 && n <= 90)
	{
		return (1);
	}

	return (0);
}

