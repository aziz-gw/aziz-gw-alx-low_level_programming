#include "main.h"
#include <string.h>

/**
 * _memcpy - copies n bytes from memory area, src to dest
 * @src: str pointed to by *src
 * @dest: str pointed to by *dest
 * @n: number of bytes to be copied
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}
