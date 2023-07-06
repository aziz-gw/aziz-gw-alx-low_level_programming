#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: ptr to the UL int to be manipulated
 * @index: index, starting from 0 of the bit to be set
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bitMask;
	unsigned int bits = sizeof(unsigned long int) * 8;

	if (index >= bits)
		return (1);

	bitMask = ~(1UL << index);
	*n &= bitMask;

	return (1);
}


