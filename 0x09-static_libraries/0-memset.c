#include "main.h"

/**
 * _memset - function that fills memory with a constant byte.
 * @s: input string
 * @b: input character
 * @n: the first n bytes
 * Return: pointer to the output string
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}

