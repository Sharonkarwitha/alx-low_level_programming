#include "main.h"
#include <stdlib.h>
/**
 * binary_to_uint - input
 * @b: declared char
 * Return: 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, dee;
	unsigned int denno;

	i = dee = denno = 0;
	if (b == NULL)
		return (0);
	while (b[dee] != '\0')
	{
		if (b[dee] == '0' || b[dee] == '1')
			dee++;
		else
			return (0);
	}
	while (i < dee)
	{
		denno = denno << 1;
		if (b[i] == '1')
			denno += 1;
		i++;
	}
	return (denno);
}
