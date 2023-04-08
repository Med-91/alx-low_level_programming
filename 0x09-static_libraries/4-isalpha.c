#include "main.h"

/**
 * _isalpha - fonction entry point
 * @c: input integer
 * Return: 1 if c is alphabetic 0 otherwise
 */
int _isalpha(int c)
{
	if ((c <= 122 && c >= 97) || (c <= 90 && c >= 65))
		return (1);
	else
		return (0);
}

