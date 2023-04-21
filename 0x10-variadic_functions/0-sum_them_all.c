#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: number of optional arguments
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int sum = 0, i;

	if (n == 0)
		return(0);
	va_start(ap, n);
	for (i = 0; i < (int)n; i++)
		sum = sum + va_arg(ap, int);
	va_end(ap);
	return (sum);
}

