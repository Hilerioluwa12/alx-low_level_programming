#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: string to be converted
 *
 * Return: The integer value of the converted string.
 */
int _atoi(char *s)
{
	int sb = 1;
	unsigned int b = 0;

	do {
		if (*s == '-')
			sb *= -1;

		else if (*s >= '0' && *s <= '9')
			b = (b * 10) + (*s - '0');

		else if (b > 0)
			break;

	} while (*s++);

	return (b * sb);
}
