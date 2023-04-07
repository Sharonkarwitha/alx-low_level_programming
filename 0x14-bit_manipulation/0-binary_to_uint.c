#include "main.h"
#include <stdlib.h>

/**
 *binary_to_unit - changing unsingend int
 *@b : is null if the string is not 0 and 1
 *return : 0 if chars are one or more
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i, shaa;
	unsigned int sharon;

	i = shaa = sharon = 0;
	if (b == NULL)
		return (0);
	while (b[shaa] != '\0')
	{
		if (b[shaa] == '0' || b[shaa] == '1')
			shaa++;
		else
			return (0);
	}
	while (i < shaa)
	{
		sharon = sharon << 1;
		if (b[i] == '1')
			sharon += 1;
		i++;
	}
	return (sharon);
}
