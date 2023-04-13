#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 * @s1: first str
 * @s2: second str
 *
 * Return: pointer to newly allocated space
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr = malloc((sizeof(char) * (strlen(s1) + strlen(s2) + 1)));

	strcpy(ptr, s1);
	strcat(ptr, s2);

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (ptr == NULL)
		return (NULL);
	return (ptr);
}
