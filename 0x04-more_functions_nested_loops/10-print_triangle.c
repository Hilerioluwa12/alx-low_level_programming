#include "main.h"

/**
 * print_triangle - prints a triangle.
 * @size: numbers of lines.
 * Return: no return.
 */
void print_triangle(int size)
{
	int a, n;

	for (a = 0; a < size; a++)
	{
		for (n = 1; n < (size - i); n++)
		_putchar(' ');
		for (n--; n < size; n++)

			_putchar(35);
		if (a < (size - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
