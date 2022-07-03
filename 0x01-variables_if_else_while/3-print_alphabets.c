#include <stdio.h>

/**
 * main - Printing lowercase and uppercase Alphabet
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char salp[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

	int a;
	for (a = 0; a < 52; a++)
	{
		putchar(salp[a]);
	}
	putchar('\n');
	return (0);
}
