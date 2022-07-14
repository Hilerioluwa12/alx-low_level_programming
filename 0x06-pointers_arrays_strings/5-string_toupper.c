#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string
 * to uppercase
 * @s: input string.
 * Return: the pointer to dest.
 */

char *string_toupper(char *s)
{
	int t = 0;

	while (*(s + t) != '\0')
	{
		if ((*(s + t) >= 97) && (*(s + t) <= 122))
			*(s + t) = *(s + t) - 32;
		t++;
	}

	return (s);
}
