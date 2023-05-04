#include "main.h"
/**
 * get_endianness - this is the entry point
 *
 * Return: the big endian is 0
 */
int get_endianness(void)
{
	int x = 1;

	return (*((char *) &x) + '0');
}
