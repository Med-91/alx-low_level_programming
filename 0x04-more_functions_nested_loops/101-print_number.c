#include "main.h"

/**
 * print_number - function that prints an integer.
 * _putchar: prints character
 * @n: input integer
 */

void print_number(int n)
{
	if (n >= 0 && n < 10)
	{
		_putchar(n + '0');
	}
	else if (n >= 10 && n < 100)
	{
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
	}
	else if (n >= 100 && n < 1000)
	{
		_putchar(n / 100 + '0');
		_putchar((n % 100) / 10 + '0');
		_putchar(n % 10 + '0');
	}
	else if (n >= 1000 && n < 10000)
	{
		_putchar(n / 1000 + '0');
		_putchar((n % 1000) / 100 + '0');
		_putchar(((n % 100) / 10) / 10 + '0');
		_putchar(n % 10 + '0');
	}
	else if (n < 0 && n > -10)
	{
		_putchar('-');
		_putchar(-n + '0');
	}
	else if (n <= -10 && n > -100)
	{
		_putchar('-');
		_putchar(-n / 10 + '0');
		_putchar(-n % 10 + '0');
	}
	else if (n <= -100 && n > -1000)
	{
		_putchar('-');
		_putchar(-n / 100 + '0');
		_putchar((-n % 100) / 10 + '0');
		_putchar(-n % 10 + '0');
	}
	else if (n <= -1000 && n > -10000)
	{
		_putchar('-');
		_putchar(-n / 1000 + '0');
		_putchar((-n % 1000) / 100 + '0');
		_putchar(((-n % 100) / 10) / 10 + '0');
		_putchar(-n % 10 + '0');
	}
}

