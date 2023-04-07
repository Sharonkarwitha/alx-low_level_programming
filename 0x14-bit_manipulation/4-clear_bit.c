#include "main.h"

/**
 * clear_ bitthis places 0 at specific index
 * @n: this is a pointer for altered digits
 * @index : to be cleared
 * Return : returns 1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int h = 1;

	if (sizeof(n) * 8 < index)
		return (-1);

h <<= index;
*n &= ~h;
return (1);
}
