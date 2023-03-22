#include "main.h"

/**
 * print_last_digit - fonction entry point
 * @n: input integer
 * Return: last digit.
 */
int print_last_digit(int n)
{
	_putchar(n % 10 + '0');
	return (n % 10);
}

