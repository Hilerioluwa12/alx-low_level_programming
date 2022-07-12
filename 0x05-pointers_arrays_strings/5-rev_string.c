#include "main.h"

/**
 * rev_string - Write a function that reverses a string.
 * @s: input string
 * Return: void
 */

void rev_string(char *s)
{
	int i, b, a = 0;
	char c;

	while (s[a])
	{
		a++;
		b = a - 1;
	}

	for (i = 0; i < a / 2; i++)
	{
		c = s[i];
		s[i] = s[b];
		s[b] = c;
		b--;
	}
}
