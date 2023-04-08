#include "main.h"
#include <stdio.h>

int _strlen(char *st);

/**
 * _strcpy - function that copies the string
 * @dest: input first string
 * @src: input second string
 * Return: string dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

