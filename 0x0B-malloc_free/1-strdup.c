#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns a pointer to a newly allocated
 * space in memory which contains a copy of the string
 * given as a parameter
 * @str: parameter to strdup
 *
 * Return: pointer, on success; NULL, on failure
 */

char *_strdup(char *str)
{
	char *ptr_strcpy = malloc(sizeof(char) * (strlen(str) + 1));

	strcpy(ptr_strcpy, str);
	if (ptr_strcpy == NULL)
		return (NULL);
	return (ptr_strcpy);
}
