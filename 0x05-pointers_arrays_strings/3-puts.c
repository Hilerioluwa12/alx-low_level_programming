#include "main.h"

/**
 * _puts - function that prints a string, followed by a new line
 * @str: string
 * Return: void
 */

void _puts(char *str)
{
	int a = 0;

	while (a >= 0)
	{
		if (str[a] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(str[a]);
		a++;
	}
}
