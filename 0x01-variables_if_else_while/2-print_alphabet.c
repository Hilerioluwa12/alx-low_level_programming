#include <stdio.h>

/**
 * main - Printing the alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ahp[26] = "abcdefghijklmnopqrstuvwxyz";
	int b;

	for (b = 0; b < 26; b++)
	{
		putchar(ahp[b]);
	}
	putchar('\n');
	return (0);
}
