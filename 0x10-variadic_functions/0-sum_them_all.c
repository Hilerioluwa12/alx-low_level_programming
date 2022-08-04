#include "variadic_functions.h"

/**
 * sum_them_all - sums up all the parameters.
 * @n: The number of variadic parameters.
 * Return: The sum of all the parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list valst;


	if (n == 0)
		return (0);

	va_start(valst, n);
	for (i = 0; i < n; i++)
		sum += va_arg(valst, int);

	va_end(valst);
	return (sum);
}
