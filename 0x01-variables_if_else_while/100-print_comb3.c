#include <stdio.h>

/**
 * main - printing combination of two numbers 01 to 99.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int a, b;

	a = 49;
	b = 48;

	while (b < 58)
	{
		a = 49;
		while (a < 58)
		{
			putchar(b);
			putchar(a);
			if (a == 57 && b == 56)
			{
				break;
			}
			putchar(',');
			putchar(' ');
			a++;
		}
		b++;
	}
	putchar('\n');
	return (0);
}
