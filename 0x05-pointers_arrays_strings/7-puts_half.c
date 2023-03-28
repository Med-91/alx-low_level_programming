#include "main.h"

int _strlen(char *st);

/**
 * puts_half - function that prints half of a string, followed by a new line.
 * @str: input pointer/string
 * _putchar: prints character
 */

void puts_half(char *str)
{
	int i = 0, j;
	int n, len = 0;

	while (str[i] != '\0')
	{
		i++;
		len++;
	}
	if (len % 2 == 0)
		n = len / 2;
	else
		n = 1 + (len - 1) / 2;
	for (j = n; j < len; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}

