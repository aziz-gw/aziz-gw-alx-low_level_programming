#include "main.h"

/**
 * _print_rev_recursion - prints string in reverse
 * @s: string to be printed
 *
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
	{
		return;
	}
	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(s[i];
}
