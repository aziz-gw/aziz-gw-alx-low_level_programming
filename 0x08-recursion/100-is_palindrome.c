#include "main.h"
#include <string.h>

/**
 * is_palindrome - checks if string is a palindrome
 * @s: string
 * @start: beginning of string
 * @end: end of striing
 *
 * Return: 1 is a string is a palindrome and 0 if not
 */

int check_palindrome(char *s, int start, int end);

int is_palindrome(char *s)
{
	int s_len = strlen(s);

	return (check_palindrome(s, 0, s_len - 1));
}

/**
 * check_palindrome - checks if string is a palindrome
 * @s: string
 * @start: beginning of string
 * @end: end of string
 *
 * Return: 1 if first and last chars of s match
 * and 0 if they don't match
 */

int check_palindrome(char *s, int start, int end)
{
	if (start >= end)
		return (1);

	if (s[start] == s[end])
		return (check_palindrome(s, start + 1, end - 1));

	return (0);
}
