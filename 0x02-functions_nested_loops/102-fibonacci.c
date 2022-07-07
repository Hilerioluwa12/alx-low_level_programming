#include <stdio.h>

/**
 * main - program that print the first 50 fibonacci number
 *
 * Return - Always 0 success
 */
int main (void)
{
	int a;
	long int c, e, fn;

	c = 1;
	e = 2;
	printf("%ld", c);
	printf("%ld", e);
	for (a = 0; a < 48; a++)
	{
		fn = c + e;
		printf(", %ld", fn);
		c = e;
		e = fn;
	}
	printf("\n");
	return (0);
}
