#include "main.h"

/**
 * print_rev - function that prints a string, in reverse, followed by a new line.
 * @s: input string
 * Return: void
 */

void print_rev(char *s)
{
	int a = 0;

	while (a >= 0)
	{
		if (s[a] == '\0')
			break;
		a++;
	}
	for (a--; a >= 0; a--)
		_putchar(s[a]);
	_putchar('\n');
}
