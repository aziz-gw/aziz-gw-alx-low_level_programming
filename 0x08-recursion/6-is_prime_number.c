#include "main.h"

/**
 * is_prime_number - returns 1 if the integer input is
 * a prime number otherwise return 0
 * @n: prime number
 * Return: prime number
 */

int is_prime_number(int n)
{
	int i;

	if (n < 2) /* prime num must be greater 1 */
	{
		return (0);
	}

	for (i = 2; i <= n / 2; i++)
	{
		if (n % i == 0)
		{
			return (0);
		}
	}
	return (1);
}
