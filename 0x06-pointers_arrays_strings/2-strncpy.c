#include "main.h"

/**
 * _strncpy - function that copies a string.
 * @dest: pointer to the first string
 * @src: pointer to the last string
 * @n: input integer
 * Return: pointer to the resulting string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int boul = 1;

	while (i < n)
	{
		if (src[i] != '\0' && boul)
			dest[i] = src[i];
		else
		{
			dest[i] = '\0';
			boul = 0;
		}
		i++;
	}
	return (dest);
}
