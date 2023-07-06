#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: binary num
 * @index: index, of the bits starting from 0
 *
 * Return: the value of the bit at index index
 * or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bin;
	unsigned int bits = sizeof(unsigned long int) * 8;

	if (index > bits)
		return (-1);

	bin =  (n >> index) & 1;

	return (bin);
}


