#include "main.h"
/**
 * set_bit - this is the entry
 * @n: n is an input
 * @index: the index
 * Return: this returns 0
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n |= 1UL << index;

	return (1);
}
