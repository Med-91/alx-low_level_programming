#include "main.h"

int _strlen(char *st);

/**
 * rev_string - function that reverses a string.
 * @s: input pointer/string
 */

void rev_string(char *s)
{
	int i;
	char c;
	char *p;
	int len = 0;

	p = s;
	while (*p != '\0')
	{
		p++;
		len++;
	}
	for (i = 0; i < len / 2; i++)
	{
		c = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = c;
	}
}

