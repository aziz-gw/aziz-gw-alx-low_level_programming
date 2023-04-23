#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - returns 1 if the integer input is
 * a prime number otherwise return 0
 * @n: prime number
 * @i: number to check
 * Return: prime number
 */

int check_prime(int n, int i);

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (check_prime(n, n - 1));
}

/**
 * check_prime - checks if number is prime
 * @i: number
 * @n: prime number
 *
 * Return: i
 */

int check_prime(int n, int i)
{
	if (i == 1)
		return (1);

	if (n % i == 0)
		return (0);

	else
		return (check_prime(n, i - 1));
}
