#include "main.h"
#include <string.h>

/**
 * _strcat - concatenates two strings, dest and src
 * @dest: first string
 * @src: second string
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{

	strcat(dest, src);
	return (dest);
}
