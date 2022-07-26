#include "main.h"
#include <stdlib.h>

/**
 * *create_array - a function that creates an array of chars,
 * @size: size of the array.
 * @c: storaged char
 *
 * Return: pointer of an array of chars
 */
char *create_array(unsigned int size, char c)
{
	char *br;
	unsigned int b;

	if (size == 0)
		return (NULL);

	br = malloc(sizeof(c) * size);

	if (br == NULL)
		return (NULL);

	for (b = 0; b < size; b++)
		br[i] = c;

	return (br);	
}
 
