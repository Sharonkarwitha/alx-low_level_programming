#include "main.h"
<<<<<<< HEAD
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
=======

/**
 *binary_to_unit - changing unsingend int
 *@b : is null if the string is not 0 and 1
 *return : 0 if chars are one or more
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
>>>>>>> 7d53686cacc2aeada5359924b9a38de902029725
}
