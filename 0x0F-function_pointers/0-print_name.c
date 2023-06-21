#include "function_pointers.h"
#include <unistd.h>

/**
 * print_name - prints a name
 * @name: name
 * @f: func pointer
 *
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{

	if (name == NULL || f == NULL)
		return;

	       f(name);
}
