#include "main.h"

/**
 * print_number - function that prints an integer.
 * print_positive - function that prits positive integer
 * _putchar: prints character
 * @n: input integer
 * @a: input positive integer
 */

void print_positive(int);

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	print_positive(n);
}

void print_positive(int a)
{
	if (a >= 0 && a < 10)
	{
		_putchar(a + '0');
	}
	else if (a >= 10 && a < 100)
	{
		_putchar(a / 10 + '0');
		_putchar(a % 10 + '0');
	}
	else if (a >= 100 && a < 1000)
	{
		_putchar(a / 100 + '0');
		_putchar((a % 100) / 10 + '0');
		_putchar(a % 10 + '0');
	}
	else if (a >= 1000 && a < 10000)
	{
		_putchar(a / 1000 + '0');
		_putchar((a % 1000) / 100 + '0');
		_putchar(((a % 100) / 10) / 10 + '0');
		_putchar(a % 10 + '0');
	}
}

