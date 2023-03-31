#include "main.h"
#include <string.h>

/**
 * string_toupper - changes all lowercase letters of str
 * to uppercase
 * @str: string
 *
 * Return: uppercase
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}
