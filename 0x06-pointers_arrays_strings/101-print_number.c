#include "main.h"

/**
 * print_number - function that prints an integer.
 * _putchar: prints character
 * @n: input integer
 */
void print_number(int n)
{
	if (n >= 10 || n <= -10)
	{
		print_number(n / 10);
	}
	if (n < 0)
	{
		if (n > -10)
			_putchar('-');
		_putchar(-(n % 10) + '0');
	}
	else
		_putchar(n % 10 + '0');
}

