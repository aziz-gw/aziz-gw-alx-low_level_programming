#include "main.h"
#include <string.h>

/**
 * is_palindrome - checks if string is a palindrome
 * @s: string
 *
 * Return: 1 is a string is a palindrome and 0 if not
 */

int is_palindrome(char *s)
{
	int i;
	int s_len = strlen(s);

	for (i = 0; i < s_len / 2; i++)
	{
		if (s[i] != s[s_len - i - 1])
			return (0);
	}
	return (1);
}
