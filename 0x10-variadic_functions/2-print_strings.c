#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 *
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strs;
	char *next_arg;
	unsigned int i;

	va_start(strs, n);

	for (i = 0; i < n; i++)
	{
		next_arg = va_arg(strs, char*);

		if (strs == NULL)
			printf("(nil)");
		else
			printf("%s", next_arg);

		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(strs);
}
