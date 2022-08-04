#include "variadic_functions.h"

/**
 * print_numbers - a function that prints numbers, followed by a new line
 * @separator: string to a pointer
 * @n: number of integers passed
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	va_list val;

	va_start(val, n);

	for (a = 0; a < n; a++)
	{
		printf("%d", va_arg(val, int));
		if (separator && a < n -1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(val);
}
