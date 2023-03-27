#include "main.h"
#include <string.h>

/**
 * int_strlen - return length of a string, s
 * @s: string
 *
 * Return: length of @s
 */

int _strlen(char *s)
{
	 int length = 0;

	 while (*s++)
		 length++;
	return (length);
}
