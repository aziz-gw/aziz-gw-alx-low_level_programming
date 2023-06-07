#include "main.h"

/**
 * is_prime_number - returns 1 if the input integer is a prime
 * number, 0 otherwise
 * @n: input integer
 * @n1: test integer
 *
 * Return: 1 if n is a prime number, 0 otherwise
 */

int _prime_number(int n, int n1);
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (_prime_number(n, n - 1));
}

/**
 * _prime_number - returns prime number
 * @n: input integer
 * @n1: test integer
 *
 * Return: 1 if n is a prime number, 0 otherwise
 */

int _prime_number(int n, int n1)
{
	if (n1 == 1)
		return (1);
	if (n % n1 == 0 && n1 > 0)
		return (0);
	return (_prime_number(n, n1 - 1));
}

