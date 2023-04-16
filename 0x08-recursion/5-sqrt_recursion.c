#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root
 * of a number
 * _sqrt - calculates the natural square root
 * of a number
 * @n: number
 * @i: test number
 * Return: square root
 */

int _sqrt(int n, int i);

int _sqrt(int n, int i)
{
	if (n < 0)
		return (-1);

	else if (n == 0)
		return (0);

	else if (i * i > n)
		return (-1);

	else if (i * i == n)
		return (i);

	else
		return (_sqrt(n, i + 1));

}

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
