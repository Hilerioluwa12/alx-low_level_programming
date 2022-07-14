#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string
 * to uppercase
 * @s: input string.
 * Return: the pointer to dest.
 */

char *string_toupper(char *s)
{
	int td = 0;

	while (*(s + td) != '\0')
	{
		if ((*(s + td) >= 97) && (*(s + td) <= 122))
			*(s + td) = *(s + td) - 32;
		td++;
	}

	return (s);
}
