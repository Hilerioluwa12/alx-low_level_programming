#include "main.h"

/**
 * int _isupper(int c) - function that checks for uppercase
 *@c:character input
 *
 * Return: 1 if character is upper case and 0 is not
 */
int _isupper(int c);
{
	int c;

	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
