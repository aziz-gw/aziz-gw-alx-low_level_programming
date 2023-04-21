#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings
 * @separator: separator
 * @n: number
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list(args);
	unsigned int i;
	char *arg;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		arg = va_arg(args, char *);

		if (arg == NULL)
			printf("(nil)");
		else
			printf("%s", arg);

		if ((separator != NULL) && (i < n - 1))
			printf("%s", separator);
	}

	va_end(args);
	printf("\n");
}
