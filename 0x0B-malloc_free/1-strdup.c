#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: input string
 * Return: pointer to a newly allocated space in memory
 */

char *_strdup(char *str)
{
	int i, c = 0;
	char *p;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		c++;
	p = (char *)malloc((c + 1) * sizeof(char));

	if (p == NULL)
		return (p);
	for (i = 0; str[i] >= '\0'; i++)
			p[i] = str[i];
	return (p);
}

