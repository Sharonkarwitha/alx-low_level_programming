#include <stdio.h>
#include "main.h"

/**
 * main - this checks the code
 *
 * Return: always returns 0
 */
int main(void)
{
	unsigned long int n;

	n = 1024;
	clear_bit(&n, 10);
	printf("%lu\n", n);
	n = 0;
	clear_bit(&n, 10);
	printf("%lu\n", n);
	n = 98;
	clear_bit(&n, 1);
	printf("%lu\n", n);
	return (0);
}
