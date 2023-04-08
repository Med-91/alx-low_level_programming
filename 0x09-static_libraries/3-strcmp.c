#include "main.h"

/**
 * _strcmp - function that compares two strings.
 * @s1: pointer to the first string
 * @s2: pointer to the last string
 * Return: 0 if equal
 *	les than 0 if s1 is smaller than s2
 *	greater than 0 otherwise
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, val = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		val = s1[i] - s2[i];
		if (val < 0 || val > 0)
			return (val);
		i++;
	}
	val = s1[i] - s2[i];
	return (val);
}

