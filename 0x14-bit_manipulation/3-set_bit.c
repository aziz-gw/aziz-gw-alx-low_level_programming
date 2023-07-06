#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: ptr to an UL int
 * @index: index, starting from 0 of the bit to set
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bits = sizeof(unsigned long int) * 8;

	if (index >= bits)
		return (1);

	*n = ((1UL << index) | *n);

	return (1);
}

