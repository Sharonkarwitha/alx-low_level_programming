#include "main.h"

/**
 *binary_to_unit - changing unsingend int
 *@b : is null if the string is not 0 and 1
 *return : 0 if chars are one or more
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		result <<= 1;

		if (b[i] & 1)
			result += 1;
		i += 1;
	}
	return (result);
}
