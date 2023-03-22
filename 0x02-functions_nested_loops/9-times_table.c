#include "main.h"
/**
 * times_table - fonction entry point
 * _putchar: prints character.
 *         ij:kl time.
 */
void times_table(void)
{
	int  i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			int x = i * j;

			if (x <= 9)
				_putchar(x + '0');
			else
			{
				_putchar(x / 10 + '0');
				_putchar(x % 10 + '0');
			}
			while (j != 9)
			{
			_putchar(',');
			_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

