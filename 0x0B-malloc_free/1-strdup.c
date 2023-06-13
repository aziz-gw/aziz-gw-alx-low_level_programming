#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space
 * in memory which contains a copy of string
 * @str: string
 *
 * Return: a pointer to a new pointer which is a duplicate
 * of the string
 */

char *_strdup(char *str)
{
	int i, len;
	char *n_str;

	if (str == NULL)
		return (NULL);

	len = 0;
	while (str[len] != '\0')
		len++;

	n_str = malloc(sizeof(char) * (len + 1));

	if (n_str == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		n_str[i] = str[i];
	n_str[len] = '\0';

	return (n_str);
}


