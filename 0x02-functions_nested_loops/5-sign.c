#include "main.h"

/**
 * print_sign - fonction entry point
 * _putchar: prints character
 * @n: input integer
 * Return: 1 if n is greater than zero,
 *         0 if n is zero
 *        -1 if n is less than zero
 */
int print_sign(int n)
{
	if (n == 0)
	{	_putchar(n + '0');
		return (0);
	}
	else if (n > 0)
	{	_putchar('+');
		return (1);
	}
	else
	{	_putchar('-');
		return (-1);
	}
}

