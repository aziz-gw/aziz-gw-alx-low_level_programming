#include "main.h"
#include <string.h>

/**
 * _strncat - concatenates two strings, dest and src
 * @src: first string
 * @dest: second string
 * @n: first n characters of string src
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{

	strncat(dest, src, n);
	return (dest);
}
