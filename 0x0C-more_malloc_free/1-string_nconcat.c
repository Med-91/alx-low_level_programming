#include "main.h"
#include <stdlib.h>

int _strlen(char *str);

/**
 * string_nconcat - function that concatenates two strings.
 * @s1: input first string
 * @s2: input second string
 * @n: number of bytes to concatenate
 * Return: pointer to the new allocated memory containing s1 and n bytes of s2
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i, c1, c2;

	c1 = _strlen(s1);
	c2 = _strlen(s2);
	if (c2 <= n)
		n = c2;
	p = malloc((c1 + n + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < c1 + n; i++)
	{
		if (i < c1)
			p[i] = s1[i];
		else
			p[i] = s2[i - c1];
	}
	p[c1 + n] = '\0';
	return (p);
}

/**
 * _strlen - function that calculate the number of character of string
 * @str: input string
 * Return: number of character of the string
 *	0 if str is NULL
 */

int _strlen(char *str)
{
	int i, coun = 0;

	if (str == NULL)
		return (0);
	for (i = 0; str[i] != '\0'; i++)
		coun++;
	return (coun);
}
