#include "main.h"
#include <string.h>

/**
 * _memset - fill memory with a constant byte, b
 * @b: constant byte
 * @*s: pointer to string s
 * @s: string pointed to by *s
 * @n: first n bytes
 * Return: memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (s);
}

