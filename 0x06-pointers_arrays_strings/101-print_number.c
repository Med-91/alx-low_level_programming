#include "main.h"

/**
 * print_number - function that prints an integer.
 * _putchar: prints character
 * @n: input integer
 */
void print_number(int n)
{
	int a;

	if (n < 0)
	{
		_putchar('-');
		a = -n;
	}
	else
		a = n;
	if (a > 10)
	{
		print_number(a / 10);
	}
	_putchar(a % 10 + '0');
}

