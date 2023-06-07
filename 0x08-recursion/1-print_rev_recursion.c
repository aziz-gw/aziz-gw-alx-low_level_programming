#include "main.h"
#include <string.h>

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: string
 *
 * Return: nothing
 */

void _print_rev_recursion(char *s)
{
	int i;

	for (i = strlen(s); (s[i] <= i || s[i] != '\0'); --i)
		_putchar(s[i]);
	_putchar('\n');
}

