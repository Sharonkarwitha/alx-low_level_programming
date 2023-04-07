#include "main.h"
#include <stddef.h>
/**
* binary changing unsingend int
* b is null if the string is not 0 and 1
* return0 if chars are one or more
*/

unsigned int binary_to_uint(const char *b)
{

	unsigned int result = 0;
	int i = 0;

	if (b == NULL)
	return (0);

	while (b[i] != '\0')
	{
		if (b[i] == '0')
		result <<= 1;
		else if (b[i] == '1')
		result = (result << 1) | 1;
		else
		return (0);

		i++;
	}
	return (result);
}
