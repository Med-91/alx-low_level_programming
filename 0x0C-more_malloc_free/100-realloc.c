#include "main.h"
#include <stdlib.h>

/**
 * _realloc - function that reallocates a memory block using malloc and free
 * @ptr: input memory pinter
 * @old_size: old size of the memory
 * @new_size: new size of the memory
 * Return: pointer to the tne new memory
 *	NULL if it fails
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i, n;
	char *p1, *p2;

	if (ptr == NULL)
	{
		p1 = malloc(new_size);
		if (p1 == NULL)
			return (NULL);
		return (p1);
	}
	if (old_size == new_size)
		return (ptr);
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	p1 = malloc(new_size);
	if (p1 == NULL)
		return (NULL);
	if (new_size > old_size)
		n = old_size;
	else
		n = new_size;
	p2 = ptr;
	for (i = 0; i < n; i++)
		p1[i] = p2[i];
	free(ptr);
	return (p1);
}

