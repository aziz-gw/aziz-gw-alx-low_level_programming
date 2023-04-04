#include "main.h"
#include <string.h>

/**
 * _strchr - locates a char, c in a str, s
 * @c: char to locate
 * @s: string containg the char
 *
 * Return: c
 */

char *_strchr(char *s, char c)
{
	char *c_occur;
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			c_occur = &s[i];
			break;
		}
	}
	return (c_occur);
}
