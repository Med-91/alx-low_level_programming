#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a string.
 * @s: inpu tstring
 * Return: lenght of string
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		unsigned int len = 0;

		len = _strlen_recursion(s + 1) + 1;
		return (len);
	}
	else
		return (0);
}

