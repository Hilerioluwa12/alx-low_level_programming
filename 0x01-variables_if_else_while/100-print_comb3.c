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

	while (b < 57)
	{
		a = 49;
		while (a < 58)
		{
			putchar(b);
			putchar(a);
			if (a == 48 && b == 48)
			{
				break;
			}
			else if (a == 49 && b == 49)
			{
				break;
			}
			else if (a == 50 && b == 50)
			{
				break;
			}
			else if (a == 51 && b == 51)
			{
				break;
			}
			else if (a == 52 && b == 52)
			{
				break;
			}
			else if (a == 53 && b == 53)
			{
				break;
			}
			else if (a == 54 && b == 54)
			{
				break;
			}
			else if (a == 55 &&  b == 55)
			{
				break;
			}
			else if (a == 56 && b == 56)
			{
				break;
			}
			else if (a == 57 && b == 56)
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
