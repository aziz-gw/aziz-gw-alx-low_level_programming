#include "variadic_functions.h"
#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 *@format: list of types of arguments
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list args;
	char c;
	int i;
	float f;
	char *s;
	const char *p = format;

	va_start(args, format);
	if (format == NULL)
		return;

	while ((c = *p++))
	{
		switch (c)
		{
			case 'c':
				i = va_arg(args, int);
				printf("%c", i);
				break;
			case 'i':
				i = va_arg(args, int);
				printf("%d", i);
				break;
			case 'f':
				f = va_arg(args, double);
				printf("%f", f);
				break;
			case 's':
				s = va_arg(args, char *);
				if (s == NULL)
					printf("(nil)");
				else
					printf("%s", s);
				break;
			default:
				break;
		}
	}
	va_end(args);
	printf("\n");
}
