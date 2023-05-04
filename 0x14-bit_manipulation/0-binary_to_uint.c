#include "main.h"
/**
* binary changing unsingend int
* b is null if the string is not 0 and 1
* return0 if chars are one or more
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int unsigned_integer;
	int length, base2;

	if (!b)
	{
		return (0);
	}

	unsigned_integer = 0;

	for (length = 0; b[length] != '\0'; length++)
		;

	for (length--, base2 = 1; length >= 0; length--, base2 *= 2)
	{
		if (b[length] != '0' && b[length] != '1')
		{
			return (0);
		}

		if (b[length] & 1)
		{
			unsigned_integer += base2;
		}
	}

	return (unsigned_integer);
}
