#include "main.h"

/**
 * _strncat - function that concatenates two strings.
 * @dest: pointer to the first string
 * @src: pointer to the last string
 * @n: input integer
 * Return: pointer to the resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0, len = 0, k = 0;

	while (dest[i] != '\0')
	{
		len++;
		i++;
	}
	while (src[j] != '\0' && k < n)
	{
		dest[len + j] = src[j];
		j++;
		k++;
	}
	dest[len + j] = '\0';
	return (dest);
}
