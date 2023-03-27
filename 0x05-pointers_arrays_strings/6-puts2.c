#include "main.h"

int _strlen(char *st);

/**
 * puts2 - function that prints every other character of a string
 * _putchar: prints character
 * @str: input pointer/string
 */

void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
		str++;
	}
	_putchar('\n');
}

