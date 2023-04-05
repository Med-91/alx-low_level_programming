#include "main.h"

/**
 * factorial - function that returns the factorial of a given number.
 * @n: input integer
 * Return: factorial of n
 */

int factorial(int n)
{
	int fact = 1;

	if (n < 0)
		return (-1);
	if (n > 1)
		fact = n * factorial(n - 1);
	return (fact);
}

