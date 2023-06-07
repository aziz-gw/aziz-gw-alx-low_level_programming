#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of
 * a number
 * @n: number
 * @n1: test number
 *
 * Return: natural square root of n
 */

int _sqrt(int n, int n1);
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (_sqrt(n, 0));
}

/**
 * _sqrt - return the natural square root of a number
 * @n: number
 * @n1: test number
 *
 * Return: natural square root of n
 */

int _sqrt(int n, int n1)
{
	if (n1 * n1 > n)
		return (-1);
	if (n1 * n1 == n)
		return (n1);
	return (_sqrt(n, n1 + 1));
}
