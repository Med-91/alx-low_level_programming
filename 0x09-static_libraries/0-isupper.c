#include "main.h"

/**
 *_isupper - function that checks for uppercase character.
 * @c: input
 * Return: Returns 1 if c is uppercase
 *	Returns 0 otherwise
 */
int _isupper(int c)
{
	int a = 0;

	if (c <= 90 && c >= 65)
		a = 1;
	return (a);
}

