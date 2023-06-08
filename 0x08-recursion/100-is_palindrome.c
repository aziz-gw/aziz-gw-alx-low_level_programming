#include "main.h"

/**
 * is_palindrome - returns 1 if a string is a palindrome,
 * 0 otherwise
 * @s: string
 * @i: char index
 * @len: string length
 *
 * Return: 1 if s is a palindrome, 0 otherwise
 */

int check_palindrome(char *s, int i, int len);
int _strlen_recursion(char *s);

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_palindrome(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - returns length of a string
 * @s: string
 *
 * Return: length of a string
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}

	return (len);
}

/**
 * check_palindrome - checks if a string is a palindrome
 * @s: string
 * @i: char index
 * @len: string length
 *
 * Return: 1 if s is a palindrome, 0 otherwise
 */

int check_palindrome(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_palindrome(s, i + 1, len - 1));
}
