#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name - prints a name
 * @name: pointer that points a char value
 * @f: function pointer that take a char
 * pointer as an argument
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if ((name != NULL) && (f != NULL))
		f(name);
}
