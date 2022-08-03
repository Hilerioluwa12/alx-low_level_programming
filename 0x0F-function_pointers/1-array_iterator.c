#include "function_pointers.h"

/**
 * array_iterator - a function that executes a function given as 
 * a parameter on each element of an array
 * @array: integer input
 * @size: size of array
 * @action: a pointer to the function
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int  a;

	if (array && action)
		for (a = 0; a < size; a++)
			action(array[a]);
}
