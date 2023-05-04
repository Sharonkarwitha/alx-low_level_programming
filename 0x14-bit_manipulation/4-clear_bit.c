#include "main.h"

/**
<<<<<<< HEAD
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
=======
 * clear_ bit -this places 0 at specific index
 * @n: this is a pointer for altered digits
 * @index : to be cleared
 * Return : returns 1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n &= ~(1UL << index);
>>>>>>> 7d53686cacc2aeada5359924b9a38de902029725

	return (1);
}
