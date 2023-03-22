#include "main.h"

/**
 * print_last_digit - fonction entry point
 * @n: input integer
 * Return: last digit.
 * _putchar: prints character
 */
int print_last_digit(int n)
{
	int val = n % 10;

	_putchar(val + '0');
	return (val);
}

