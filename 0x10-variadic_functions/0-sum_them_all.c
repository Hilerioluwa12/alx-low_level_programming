#include "variadic_functions.h"

/**
 * sum_them_all - a function that returns the sum of all
 * @n: amount of arguments
 * Return: Always 0 Success
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list valst;
	unsigned int i;
	int sum = 0;
	
	if (n == 0)
		return (0);

	va_start(valst, n);
	for (i = 0; i < n; i++)
		sum += va_arg(valst, int);

	va_end(valst);
	return (sum);
}
