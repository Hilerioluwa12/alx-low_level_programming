#include "variadic_functions.h"

/**
 * print_strings - a function that prints strings, followed by a new line.
 * @separator: string that prints
 * @n: number of string passed
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list val;
	char *str;

	if (separator == NULL)
		separator = "";

	va_start(val, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(val, char *);

		if (str == NULL)
			str = "(nil)";

		printf("%s", str);
		
		if (i < n -1)
			printf("%s", separator);
	}

	va_end(val);
	printf("\n");

}
