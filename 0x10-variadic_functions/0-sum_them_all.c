#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - return the sum of all parameters
 * @n: number of parameters
 *
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i, sum;

	va_start(args, n);
	sum = 0;

	for (i = 0; i < n; i++)
		sum += va_arg(args, unsigned int);

	va_end(args);

	return (sum);
}
