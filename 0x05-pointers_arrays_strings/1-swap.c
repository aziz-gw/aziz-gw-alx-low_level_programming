#include "main.h"

/**
 * swap_int - swaps the values of two integers,
 * a and b
 * @a: first integer
 * @b: second integer
 */

void swap_int(int *a, int *b)
{
	int ptr_a = *a;
	*a = *b;
	*b = ptr_a;

}
