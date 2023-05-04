#include "main.h"

/**
 * clear_bit - sets value to 0
 * @n:  long i pointer
 * index bit 
 * returns 1 if success.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int byte;

	if (index > 63)
	{
		return (-1);
	}

	byte = 1 << index;

	if (*n & byte)
	{
		*n ^= byte;
	}

	return (1);
}
