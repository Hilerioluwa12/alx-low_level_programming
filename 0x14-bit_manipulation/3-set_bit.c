#include "main.h"

/**
 * set_bit - A function that sets value of a bit to 1
 * @n: unsigned long int
 * @index:unsigned int
 *
 * Retunr: 1 if worked or -1 if error
 */
int set_bit(unsigned long int *n, unsigned index)
{
	unsigned int p;

	if (index >= 32)
		return (-1);
	
	p = 1 << index;
	*n |= p;

	return (1);
}
