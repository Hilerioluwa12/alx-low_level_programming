#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 * Return: Nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int b;
	va_list val;

	if (separator == NULL)
		separator = "";

	va_start(val, n);
	for (b = 0; b < n; b++)
	{
		printf("%d", va_arg(val, int));
		if (b < n - 1)
			printf("%s", separator);
	}
	va_end(val);
	printf("\n");
}
