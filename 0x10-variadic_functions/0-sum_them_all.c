#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sums all its paramters
 * @n: named parameter
 *
 * Return: sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list arg_list;
	unsigned int i, sum = 0;

	va_start(arg_list, n);

	for (i = 0; i < n; i++)
		sum += va_arg(arg_list, int);

	va_end(arg_list);

	return (sum);
}

