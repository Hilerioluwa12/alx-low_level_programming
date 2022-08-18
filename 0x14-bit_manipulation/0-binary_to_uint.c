#include "main.h"

/**
 * binary_to_unit - a function that converts a binary number
 * @b: pointer to the string 0 & 1
 *
 *Return: converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int uint;
	int l, base_two;

	if (!b)
		return (0);

	uint = 0;

	for (l = 0; b[l] != '\0'; l++)
		;

	for (l--, base_two = 1; l >= 0; l--, base_two *= 2)
	{
		if (b[l] != '0' && b[l] != '1')
		{
			return (0);
		}

		if (b[l] & 1)
		{
			uint += base_two;
		}
	}

	return (uint);
}
