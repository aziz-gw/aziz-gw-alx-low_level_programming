#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 *
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, num;
	va_list p;

	va_start(p, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(p, unsigned int);
		printf("%d", num);

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	va_end(p);

	printf("\n");
}
