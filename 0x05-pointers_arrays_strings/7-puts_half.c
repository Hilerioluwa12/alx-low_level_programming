#include "main.h"

/**
 * puts_half - function that prints half of a string
 * @str: input string
 * Return: void
 */

void puts_half(char *str)
{
	int i = 0 b;

	while (str[i])
	{
		i++
	}
	if (i % 2 == 1)
		b = i / 2;
	else
		b = (i - 1) / 2;

	for (b++; b < i; b++)
	_putchar(str[b]);
	_putchar('\n');
}
