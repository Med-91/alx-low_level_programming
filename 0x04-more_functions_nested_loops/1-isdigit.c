#include "main.h"

/**
 *_isdigit - function that checks for digit character.
 * @c: input
 * Return: Returns 1 if digit
 *	Returns 0 otherwise
 */

int _isdigit(int c)
{
	int a = 0;

	if (c <= 57 && c >= 48)
		a = 1;
	return (a);
}
