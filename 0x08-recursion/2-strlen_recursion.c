#include "main.h"

/**
 * _strlen_recursion - returns length of a string
 * @s: string
 *
 * Return: length
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
	{
		return (0);
	}
	s++;
	return (_strlen_recursion(s) + 1);
}
