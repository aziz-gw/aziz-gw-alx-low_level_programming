#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to s1 followed by s2, and null terminated
 */

char *str_concat(char *s1, char *s2)
{
	char *str;
	size_t len1;
	size_t len2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	str = malloc(len1 + len2 + 1);

	if (str == NULL)
		return (NULL);

	memcpy(str, s1, len1);
	memcpy(str + len1, s2, len2);

	str[len1 + len2] = '\0';

	return (str);
}
