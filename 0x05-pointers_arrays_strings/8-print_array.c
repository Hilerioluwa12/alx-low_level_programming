#include "main.h"
#include <stdio.h>

/**
 * print_array - function that prints n elements of an array of integers,
 * @a: integer
 * @n: integer
 * Return: void
 */

void print_array(int *a, int n)
{
	int b;

	for (b; b < n; b++)
	{
		printf("%d", *(a + b));
		if (b < (n - 1))
		printf(", ");
	}
	_putchar('\n');
}
