#include "main.h"

/**
 * set_bit- A function that sets value of a bit to
 * @n: unsigned long int
 * @index:unsigned int
 *
 * Return: (1) if worked or (-1) if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int p;

	if (index >= 32)
		return (-1);

	p = 1 << index;
	*n |= p;

	return (1);
}
