#include "main.h"

/**
 * _strlen - function that returns the length of a string.
 * @s: string
 * Return: Always 0 Success
 */

int _strlen(char *s)
{
	int a = 0;

	while (*(s + a) != '\0')
		a++;
	return (a);
}
