#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: first n bytes of s2
 *
 * Return: pointer to a newly allocated space in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr_cat = malloc((sizeof(char) * (strlen(s1) + strlen(s2) + 1)));

	if (ptr_cat == NULL)
		return (NULL);

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	if (n >= strlen(s2))
		n = strlen(s2);

	strncpy(ptr_cat, s1, n);
	strcat(ptr_cat, s2);

	ptr_cat[strlen(s1) + n] = '\0';
	return (ptr_cat);
}
