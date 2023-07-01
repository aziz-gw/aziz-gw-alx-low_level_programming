#include <stdio.h>

/**
 * print_str - prints a str
 *
 * Return: nothing
 */

void print_str(void);

void __attribute__((constructor)) print_str(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}

