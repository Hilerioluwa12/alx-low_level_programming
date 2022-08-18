#include "main.h"

/**
 * get_bit - A function that returnsbit value of index
 * @n: unsigned ling int
 * @index: unsigned int
 *
 * Return: value of bit at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int b;

	if (index >= 32)
		return (-1);
	b = 1 << index;
	b &= n;
	b >>= index;

	return (b);
}
