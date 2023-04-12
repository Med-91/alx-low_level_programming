#include <stdlib.h>
#include "main.h"

/**
 * str_concat - function that concatenates two strings.
 * @s1: input first string
 * @s2: input second string
 * Return: pointer to a newly allocated space in memory
 *	with contnent of s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	int i, c1, c2;
	char *p;

	c1 = c2 = 0;
	if (s1)
		for (i = 0; s1[i] != '\0'; i++)
			c1++;
	if (s2)
		for (i = 0; s2[i] != '\0'; i++)
			c2++;
	p = (char *)malloc((c1 + c2 + 1) * sizeof(char));

	if (p == NULL)
		return (p);
	for (i = 0; i <= c1 + c2; i++)
	{
		if (i < c1)
			p[i] = s1[i];
		else
			p[i] = s2[i - c1];
	}
	return (p);
}

