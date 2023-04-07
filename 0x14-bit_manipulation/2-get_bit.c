#include "main.h"
/**
 * get_bit - this is the entry point
 * @n: n is the input
 * @index: an interger
 * Return: return 0 on success
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
