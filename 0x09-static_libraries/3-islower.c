#include "main.h"

/**
 * _islower - fonction entry point
 * @c: input character
 * Return: 1 if c is lowercase 0 otherwise
 */
int _islower(int c)
{
	if (c <= 122 && c >= 97)
		return (1);
	else
		return (0);
}

