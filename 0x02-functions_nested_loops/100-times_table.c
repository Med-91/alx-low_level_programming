#include "main.h"
/**
 * print_times_table - fonction entry point
 * _putchar: prints character.
 * @n input integer
 */
void print_times_table(int n)
{
if (n <= 15 || n >= 0)
{
	int  i, j;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			int a = i * j;

			if (j == 0)
				_putchar('0');
			else if (a <= 9)
			{
				_putchar(' ');
				_putchar(a + '0');
			}
			else
			{
				_putchar(a / 10 + '0');
				_putchar(a % 10 + '0');
			}
			if (j != 9)
			{
			_putchar(',');
			_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
}

