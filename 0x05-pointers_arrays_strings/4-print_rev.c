#include "main.h"

int _strlen(char *st);

/**
 * print_rev - function that prints a string, in reverse.
 * _putchar: prints character
 * _strlen: return lenght of string
 * @s: input pointer
 */

void print_rev(char *s)
{
	int i;
	int n;

	n = _strlen(s);
	for (i = n; i > 0; i--)
	{
		_putchar(*(s + i - 1));
	}
	_putchar('\n');
}

/**
 * _strlen - return lenght of string
 * @st: input pointer
 * Return: lenght of string
 */
int _strlen(char *st)
{
	int len = 0;

	while (*st != '\0')
	{
		st++;
		len++;
	}
	return (len);
}

