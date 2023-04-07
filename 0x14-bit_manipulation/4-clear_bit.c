#include "main.h"

/**
 * clear_ bitthis places 0 at specific index
 * @n: this is a pointer for altered digits
 * @index : to be cleared
 * Return : returns 1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n &= ~(1UL << index);

	return (1);
}
