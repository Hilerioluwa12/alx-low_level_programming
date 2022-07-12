#include "main.h"

/**
 * print_rev - function that prints a string, in reverse, followed by a new line.
 * @a: input string
 * Return: void
 */

void print_rev(char *s)
{
	int a = 0;

	while (a >= 0)
	{
		if (s[a] == '\0')
			break;
	}
	for (a--; a >= 0; a--)
		_putchar(s[a]);
	_putchar('\n');
}
