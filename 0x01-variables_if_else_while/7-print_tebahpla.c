#include <stdio.h>

/**
 * main - Printing the lowercase alphabet in reversed style.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ahp[26] = "zyxwvutsrqponmlkjihgfedcba";
	int b;

	for (b = 0; b < 26; b++)
	{
		putchar(ahp[b]);
	}
	putchar('\n');
	return (0);
}
