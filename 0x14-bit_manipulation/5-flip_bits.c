#include "main.h"

/**
 * flip_bits - this flips mumber of bits
 * @n:1st no
 * @m: 2nd no
 * Return: this returns n and m
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int xor_value = n ^ m;

	while (xor_value != 0)
	{
		count += xor_value & 1;
		xor_value >>= 1;
	}
	return (count);
}
