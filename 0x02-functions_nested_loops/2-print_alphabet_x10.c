#include "main.h"

/**
 * print_alphabet_x10 - fonction entry point
 * _putchar: prints character
 */
void print_alphabet_x10(void)
{
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		char j;

		for (j = 'a'; j <= 'z'; j++)
			_putchar(j);
		_putchar('\n');
	}

}

