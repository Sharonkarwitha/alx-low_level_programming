#include "main.h"

/**
 * clear_bit - bit value 0
 * @n: int pointer
 * @index: bit 
 * Return: always 1
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
