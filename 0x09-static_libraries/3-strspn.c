#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: input string
 * @accept: input substring
 * Return:  number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j;
	unsigned int val = 0;

	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				val++;
				break;
			}
			j++;
		}
		if (!accept[j] && val)
			break;
		i++;
	}
	return (val);
}
