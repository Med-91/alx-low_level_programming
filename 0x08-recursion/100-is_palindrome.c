#include "main.h"
#include <string.h>
int _palin(char *str, int i, int l);

/**
 * is_palindrome - function that tells if a string is plindrome.
 * @s: input string
 * Return: 1 if a string is a palindrome and 0 if not
 */

int is_palindrome(char *s)
{
	int p;
	int len;

	len = strlen(s);
	if (len == 0 || len == 1)
		return (1);
	p = _palin(s, 0, len);
	return (p);
}

/**
 * _palin - fonction that help to determine if a number is prime
 * @str: input string
 * @l: input integer
 * @i: input increment
 * Return: 1 if a string is a palindrome and 0 if not
 */

int _palin(char *str, int i, int l)
{
	int val = 1;

	if (i < (l / 2))
	{
		if (str[i] != str[l - 1 - i])
			return (0);
		val = _palin(str, i + 1, l);
	}
	return (val);
}

