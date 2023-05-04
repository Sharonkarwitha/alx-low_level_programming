#include "main.h"

/**
 * print_binary - this will print the binary representative of a number
 * @n: this is the digit to be printed
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}
