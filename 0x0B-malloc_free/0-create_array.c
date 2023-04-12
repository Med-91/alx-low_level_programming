#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars  initialized with a specific char
 * @size: input size
 * @c: input character
 * Return: pointer to the array or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p;

	if (size == 0)
		return (NULL);
	p = (char *)malloc((size));

	if (p == NULL)
		return (p);
	for (i = 0; i < size; i++)
		p[i] = c;
	return (p);
}

